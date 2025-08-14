import pygame
import random

# Constants (Same as provided earlier)

# ... (The code for shapes, Tetromino class, and the rest remains as provided)

def tetromino_collision(tetromino):
    for r in range(len(tetromino.shape)):
        for c in range(len(tetromino.shape[r])):
            if tetromino.shape[r][c]:
                next_y = (tetromino.y // BLOCK_SIZE) + r + 1
                if next_y >= ROWS or grid[next_y][tetromino.x // BLOCK_SIZE] != WHITE:
                    return True
    return False

def place_tetromino(tetromino):
    for r in range(len(tetromino.shape)):
        for c in range(len(tetromino.shape[r])):
            if tetromino.shape[r][c]:
                grid[(tetromino.y // BLOCK_SIZE) + r][(tetromino.x // BLOCK_SIZE) + c] = tetromino.color

def draw_shapes():
    for r in range(ROWS):
        for c in range(COLS):
            if grid[r][c] != WHITE:
                pygame.draw.rect(win, grid[r][c], (c * BLOCK_SIZE, r * BLOCK_SIZE, BLOCK_SIZE, BLOCK_SIZE))

# The main function and its implementation remain as previously provided

# Inside the main function, the `if __name__ == "__main__":` condition remains the same
