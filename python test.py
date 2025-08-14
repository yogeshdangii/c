import pygame
import sys
import time
import random

# Initialize Pygame
pygame.init()

# Set up display
WIDTH, HEIGHT = 800, 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Typing Speed Test")

# Colors
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
GRAY = (169, 169, 169)

# Fonts
font = pygame.font.Font(None, 36)
bold_font = pygame.font.Font(None, 42)

# Game variables
text_color = BLACK  # Set text color to black
input_text = ""
start_time = 0
elapsed_time = 0
typing = False
timer_started = False
time_remaining = 60

# Generate a random string for typing
def generate_text():
    words = ["programming", "python", "pygame", "code", "challenge", "keyboard", "speed", "practice"]
    return " ".join(random.sample(words, k=5))

current_text = generate_text()

# Function to break text into lines with word wrapping
def wrap_text(text, font, max_width):
    words = text.split()
    lines = []
    current_line = []

    for word in words:
        test_line = " ".join(current_line + [word])
        if font.size(test_line)[0] <= max_width:
            current_line.append(word)
        else:
            lines.append(" ".join(current_line))
            current_line = [word]

    lines.append(" ".join(current_line))
    return lines

# Function to show the result in a pop-up window
def show_result(words_per_minute):
    pygame.display.quit()  # Close the main window
    result_screen = pygame.display.set_mode((400, 200))
    pygame.display.set_caption("Test Result")

    result_screen.fill(WHITE)
    result_text = bold_font.render(f"Your typing speed: {words_per_minute:.2f} words per minute", True, BLACK)
    result_screen.blit(result_text, (50, 50))
    pygame.display.flip()

    # Wait for a key press before closing the result window
    waiting = True
    while waiting:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                sys.exit()
            elif event.type == pygame.KEYDOWN:
                waiting = False

# Main game loop
while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()
        elif event.type == pygame.KEYDOWN and event.key == pygame.K_RETURN:
            if not typing:
                typing = True
                timer_started = True
                start_time = time.time()
                current_text = generate_text()
                input_text = ""
                time_remaining = 60
        elif event.type == pygame.KEYDOWN and event.key == pygame.K_BACKSPACE:
            input_text = input_text[:-1]
        elif event.type == pygame.KEYDOWN and typing:
            input_text += event.unicode

    # Clear the screen
    screen.fill(BLACK)

    # Wrap the current text into lines with word wrapping
    wrapped_lines = wrap_text(current_text, font, WIDTH - 100)

    # Display the timer
    if timer_started:
        time_remaining = max(0, 60 - int(time.time() - start_time))
        timer_text = font.render(f"Time: {time_remaining} seconds", True, WHITE)
        screen.blit(timer_text, (50, 20))

    # Display the text
    line_height = 40
    for i, line in enumerate(wrapped_lines):
        text_surface = font.render(line, True, text_color)
        screen.blit(text_surface, (50, 50 + i * line_height))

    # Display the input box
    input_box_rect = pygame.Rect(50, 50, WIDTH - 100, HEIGHT - 200)
    pygame.draw.rect(screen, WHITE, input_box_rect)
    input_surface = bold_font.render(input_text, True, BLACK)
    # Add white outline to the text
    input_surface.set_colorkey(WHITE)
    input_surface.set_alpha(255)
    outline = input_surface.copy()
    outline.fill((255, 255, 255, 0))
    for i in range(-2, 3, 2):
        for j in range(-2, 3, 2):
            input_surface.blit(outline, (i, j))
    screen.blit(input_surface, (60, 60))

    # Double the size of the white box below it
    expanded_box_rect = pygame.Rect(50, HEIGHT - 150, WIDTH - 100, HEIGHT - 100)
    pygame.draw.rect(screen, WHITE, expanded_box_rect)

    # Display the start test button
    start_button_rect = pygame.Rect(WIDTH - 200, 20, 150, 50)
    pygame.draw.rect(screen, GRAY, start_button_rect)
    start_button_text = font.render("Start Test", True, BLACK)
    screen.blit(start_button_text, (WIDTH - 190, 30))

    # Check if the button is clicked
    mouse_pos = pygame.mouse.get_pos()
    if start_button_rect.collidepoint(mouse_pos) and pygame.mouse.get_pressed()[0]:
        typing = True
        timer_started = True
        start_time = time.time()
        current_text = generate_text()
        input_text = ""
        time_remaining = 60

    # Check if the time is up
    if typing and time_remaining == 0:
        typing = False
        timer_started = False
        words_per_minute = len(input_text.split()) / (60 - time_remaining) * 60
        result_text = f"Your typing speed: {words_per_minute:.2f} words per minute"
        print(result_text)

        # Show the result in a pop-up window
        show_result(words_per_minute)

        # Reset timer and input text for the next round
        start_time = 0
        elapsed_time = 0
        input_text = ""

    pygame.display.flip()
    pygame.time.Clock().tick(30)
 