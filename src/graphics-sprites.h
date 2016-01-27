#ifndef __GRAPHICS_SPRITES_H__
#define __GRAPHICS_SPRITES_H__

#define GRAPHICS_SPRITES_SCREENSHOT_WIDTH 150
#define GRAPHICS_SPRITES_SCREENSHOT_HEIGHT 40

typedef enum graphics_sprites_colors_e
{
	GRAPHICS_SPRITES_COLOR_BLACK = 1,
	GRAPHICS_SPRITES_COLOR_RED = 2,
	GRAPHICS_SPRITES_COLOR_GREEN = 3,
	GRAPHICS_SPRITES_COLOR_YELLOW = 4,
	GRAPHICS_SPRITES_COLOR_BLUE = 5,
	GRAPHICS_SPRITES_COLOR_MAGENTA = 6,
	GRAPHICS_SPRITES_COLOR_CYAN = 7,
	GRAPHICS_SPRITES_COLOR_WHITE = 8,
	GRAPHICS_SPRITES_COLOR_RANDOM = 9,
	GRAPHICS_SPRITES_COLOR_RANDOM_FILL = 10,
	GRAPHICS_SPRITES_COLOR_WHITE_FILLED = 11
} graphics_sprites_colors_t;

typedef enum graphics_sprites_type_e
{
	GRAPHICS_SPRITES_TYPE_UNDESTROYABLE = 0,
	GRAPHICS_SPRITES_TYPE_DESTROYABLE = 1,
	GRAPHICS_SPRITES_TYPE_DESTROYED = 2,
	GRAPHICS_SPRITES_TYPE_PLAYER = 3,
	GRAPHICS_SPRITES_TYPE_PLAYER_STANDING = 4,
	GRAPHICS_SPRITES_TYPE_ENEMY = 5,
	GRAPHICS_SPRITES_TYPE_ENEMY_STANDING = 6,
	GRAPHICS_SPRITES_TYPE_BOMB = 7,
	GRAPHICS_SPRITES_TYPE_BOMB_UP = 8,
	GRAPHICS_SPRITES_TYPE_FIRE = 9,
	GRAPHICS_SPRITES_TYPE_HEART = 10,
	GRAPHICS_SPRITES_TYPE_SNEAKER = 11,
	GRAPHICS_SPRITES_TYPE_UP = 12,
	GRAPHICS_SPRITES_TYPE_SHIELD = 13,
	GRAPHICS_SPRITES_TYPE_EXPLOSION_1 = 14,
	GRAPHICS_SPRITES_TYPE_EXPLOSION_2 = 15,
	GRAPHICS_SPRITES_TYPE_BOMBS_PLACABLE = 16,
	GRAPHICS_SPRITES_TYPE_SPEED = 17,
	
	GRAPHICS_SPRITES_TYPE_START_SCREEN_TEXT,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_1,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_2,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_3,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_4,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_5,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_6,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_7,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_8,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_9,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_10,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_11,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_12,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_13,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_14,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_15,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_16,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_17,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_18,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_19,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_20,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_21,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_22,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_23,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_24,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_25,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_26,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_27,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_28,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_29,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_30,
	GRAPHICS_SPRITES_TYPE_START_SCREEN_31,
	
	GRAPHICS_SPRITES_TYPE_GAME_OVER_SCREEN_1,
	GRAPHICS_SPRITES_TYPE_GAME_OVER_SCREEN_2,
	GRAPHICS_SPRITES_TYPE_GAME_OVER_SCREEN_3,
	GRAPHICS_SPRITES_TYPE_GAME_OVER_SCREEN_4,
	GRAPHICS_SPRITES_TYPE_GAME_OVER_SCREEN_5,
	GRAPHICS_SPRITES_TYPE_GAME_OVER_SCREEN_6,
	GRAPHICS_SPRITES_TYPE_GAME_OVER_SCREEN_7,
	GRAPHICS_SPRITES_TYPE_GAME_OVER_SCREEN_8,
	GRAPHICS_SPRITES_TYPE_GAME_OVER_SCREEN_9,
	GRAPHICS_SPRITES_TYPE_GAME_OVER_SCREEN_10,
	GRAPHICS_SPRITES_TYPE_GAME_OVER_SCREEN_11,
	GRAPHICS_SPRITES_TYPE_GAME_OVER_SCREEN_12,
	GRAPHICS_SPRITES_TYPE_GAME_OVER_SCREEN_13,
	GRAPHICS_SPRITES_TYPE_GAME_OVER_SCREEN_14,
	
	GRAPHICS_SPRITES_TYPE_PLAYER_TURBO_MODE,
	GRAPHICS_SPRITES_TYPE_PLAYER_STANDING_TURBO_MODE,
	
	GRAPHICS_SPRITES_TYPE_MENU_KEY_1,
	GRAPHICS_SPRITES_TYPE_MENU_KEY_2,
	GRAPHICS_SPRITES_TYPE_MENU_KEY_3,
	GRAPHICS_SPRITES_TYPE_MENU_KEY_4,
	GRAPHICS_SPRITES_TYPE_MENU_LOGO_1,
	GRAPHICS_SPRITES_TYPE_MENU_LOGO_2,
	GRAPHICS_SPRITES_TYPE_MENU_START
} graphics_sprites_type_t;

typedef struct graphics_sprites_sprite_s
{
	graphics_sprites_type_t type;
	char *path;
	int width;
	int height;
	char *data;
	graphics_sprites_colors_t color;
} graphics_sprites_sprite_t;

void graphics_sprites_init_colors(void);
char *graphics_sprites_read(char *path, int width, int height);
void graphics_sprites_init(void);
void graphics_sprites_cleanup(void);
graphics_sprites_sprite_t *graphics_sprites_get(graphics_sprites_type_t type);
void graphics_sprites_render(int render_x, int render_y, graphics_sprites_type_t type, char transparency);
void graphics_sprites_render_box(int render_x, int render_y, int width, int height);
void graphics_sprites_screenshot(void);

#endif /* __GRAPHICS_SPRITES_H__ */
