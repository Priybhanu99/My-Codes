import pygame
 
# initialise the pygame
pygame.init()

# Display Screen
screen=pygame.display.set_mode((800,600))

# Game Loop
running=True

while running:
    for event in pygame.event.get():
        if event.type==pygame.QUIT:
                running=False
    screen.fill((30,112,80))
    pygame.display.update()