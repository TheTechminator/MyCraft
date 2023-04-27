#ifndef _TEXTURAK
#define _TEXTURAK
#include "iranyitas.h"


ALLEGRO_BITMAP *bmp, *myture;
GLuint btexture[160], btexture2[20], ctable[2], harom1[5], harom2[5], ajt[10];

void texturabetoltes(){
    myture = al_load_bitmap("texture/dirt.png"); // 256 x 256 pixels
    btexture[9] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/cobblestone.png"); // 256 x 256 pixels
    btexture[8] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/brick.png"); // 256 x 256 pixels
    btexture[7] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/planks_oak.png"); // 256 x 256 pixels
    btexture[6] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/gold_block.png"); // 256 x 256 pixels
    btexture[5] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/diamond_block.png"); // 256 x 256 pixels
    btexture[4] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/emerald_block.png"); // 256 x 256 pixels
    btexture[3] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/lapis_block.png"); // 256 x 256 pixels
    btexture[2] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/iron_block.png"); // 256 x 256 pixels
    btexture[1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/planks_spruce.png"); // 256 x 256 pixels
    btexture[10] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/planks_birch.png"); // 256 x 256 pixels
    btexture[11] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/planks_jungle.png"); // 256 x 256 pixels
    btexture[12] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/planks_acacia.png"); // 256 x 256 pixels
    btexture[13] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/planks_big_oak.png"); // 256 x 256 pixels
    btexture[14] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/stonebrick.png"); // 256 x 256 pixels
    btexture[15] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/stonebrick_mossy.png"); // 256 x 256 pixels
    btexture[16] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/stonebrick_cracked.png"); // 256 x 256 pixels
    btexture[17] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/stonebrick_carved.png"); // 256 x 256 pixels
    btexture[18] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/end_bricks.png"); // 256 x 256 pixels
    btexture[19] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/prismarine_bricks.png"); // 256 x 256 pixels
    btexture[20] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/cobblestone_mossy.png"); // 256 x 256 pixels
    btexture[21] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/sandstone_normal.png"); // 256 x 256 pixels
    btexture[22] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/coal_block.png"); // 256 x 256 pixels
    btexture[23] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/prismarine_dark.png"); // 256 x 256 pixels
    btexture[24] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/slime.png"); // 256 x 256 pixels
    btexture[25] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/glass.png"); // 256 x 256 pixels
    btexture[26] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/glass_black.png"); // 256 x 256 pixels
    btexture[27] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/glass_blue.png"); // 256 x 256 pixels
    btexture[28] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/glass_brown.png"); // 256 x 256 pixels
    btexture[29] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/glass_cyan.png"); // 256 x 256 pixels
    btexture[29+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/glass_gray.png"); // 256 x 256 pixels
    btexture[30+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/glass_green.png"); // 256 x 256 pixels
    btexture[31+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/glass_light_blue.png"); // 256 x 256 pixels
    btexture[32+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/glass_lime.png"); // 256 x 256 pixels
    btexture[33+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/glass_magenta.png"); // 256 x 256 pixels
    btexture[34+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/glass_orange.png"); // 256 x 256 pixels
    btexture[35+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/glass_pink.png"); // 256 x 256 pixels
    btexture[36+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/glass_purple.png"); // 256 x 256 pixels
    btexture[37+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/glass_red.png"); // 256 x 256 pixels
    btexture[38+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/glass_silver.png"); // 256 x 256 pixels
    btexture[39+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/glass_white.png"); // 256 x 256 pixels
    btexture[40+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/glass_yellow.png"); // 256 x 256 pixels
    btexture[41+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/wool_colored_black.png"); // 256 x 256 pixels
    btexture[42+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/wool_colored_blue.png"); // 256 x 256 pixels
    btexture[43+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/wool_colored_brown.png"); // 256 x 256 pixels
    btexture[44+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/wool_colored_cyan.png"); // 256 x 256 pixels
    btexture[45+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/wool_colored_gray.png"); // 256 x 256 pixels
    btexture[46+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/wool_colored_green.png"); // 256 x 256 pixels
    btexture[47+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/wool_colored_light_blue.png"); // 256 x 256 pixels
    btexture[48+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/wool_colored_lime.png"); // 256 x 256 pixels
    btexture[49+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/wool_colored_magenta.png"); // 256 x 256 pixels
    btexture[50+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/wool_colored_orange.png"); // 256 x 256 pixels
    btexture[51+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/wool_colored_pink.png"); // 256 x 256 pixels
    btexture[52+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/wool_colored_purple.png"); // 256 x 256 pixels
    btexture[53+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/wool_colored_red.png"); // 256 x 256 pixels
    btexture[54+1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/wool_colored_silver.png"); // 256 x 256 pixels
    btexture[56] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/wool_colored_white.png"); // 256 x 256 pixels
    btexture[57] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/wool_colored_yellow.png"); // 256 x 256 pixels
    btexture[58] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/netherrack.png"); // 256 x 256 pixels
    btexture[59] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/nether_brick.png"); // 256 x 256 pixels
    btexture[60] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/stone.png"); // 256 x 256 pixels
    btexture[61] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/coal_ore.png"); // 256 x 256 pixels
    btexture[62] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/diamond_ore.png"); // 256 x 256 pixels
    btexture[63] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/emerald_ore.png"); // 256 x 256 pixels
    btexture[64] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/gold_ore.png"); // 256 x 256 pixels
    btexture[65] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/iron_ore.png"); // 256 x 256 pixels
    btexture[66] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/lapis_ore.png"); // 256 x 256 pixels
    btexture[67] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/quartz_ore.png"); // 256 x 256 pixels
    btexture[68] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/redstone_ore.png"); // 256 x 256 pixels
    btexture[69] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/gravel.png"); // 256 x 256 pixels
    btexture[70] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/stone_granite.png"); // 256 x 256 pixels
    btexture[71] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/stone_granite_smooth.png"); // 256 x 256 pixels
    btexture[72] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/stone_diorite.png"); // 256 x 256 pixels
    btexture[73] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/stone_diorite_smooth.png"); // 256 x 256 pixels
    btexture[74] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/stone_andesite.png"); // 256 x 256 pixels
    btexture[75] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/stone_andesite_smooth.png"); // 256 x 256 pixels
    btexture[76] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/sand.png"); // 256 x 256 pixels
    btexture[77] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/redstone_block.png"); // 256 x 256 pixels
    btexture[78] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/purpur_block.png"); // 256 x 256 pixels
    btexture[79] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/noteblock.png"); // 256 x 256 pixels
    btexture[80] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/sponge.png"); // 256 x 256 pixels
    btexture[81] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/sponge_wet.png"); // 256 x 256 pixels
    btexture[82] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/soul_sand.png"); // 256 x 256 pixels
    btexture[83] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/bedrock.png"); // 256 x 256 pixels
    btexture[84] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/mob_spawner.png"); // 256 x 256 pixels
    btexture[85] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/mushroom_block_skin_stem.png"); // 256 x 256 pixels
    btexture[86] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/mushroom_block_skin_red.png"); // 256 x 256 pixels
    btexture[87] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/mushroom_block_skin_brown.png"); // 256 x 256 pixels
    btexture[88] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/mushroom_block_inside.png"); // 256 x 256 pixels
    btexture[89] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/ice_packed.png"); // 256 x 256 pixels
    btexture[90] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/ice.png"); // 256 x 256 pixels
    btexture[91] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/snow.png"); // 256 x 256 pixels
    btexture[92] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/leaves_acacia.png"); // 256 x 256 pixels
    btexture[93] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/leaves_big_oak.png"); // 256 x 256 pixels
    btexture[94] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/leaves_birch.png"); // 256 x 256 pixels
    btexture[95] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/leaves_jungle.png"); // 256 x 256 pixels
    btexture[96] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/leaves_oak.png"); // 256 x 256 pixels
    btexture[97] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/leaves_spruce.png"); // 256 x 256 pixels
    btexture[98] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/obsidian.png"); // 256 x 256 pixels
    btexture[99] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/redstone_lamp_off.png"); // 256 x 256 pixels
    btexture[100] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/log_oak.png"); // 256 x 256 pixels
    btexture[101] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/log_oak_top.png"); // 256 x 256 pixels
    btexture2[1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/log_acacia.png"); // 256 x 256 pixels
    btexture[102] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/log_acacia_top.png"); // 256 x 256 pixels
    btexture2[2] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/log_big_oak.png"); // 256 x 256 pixels
    btexture[103] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/log_big_oak_top.png"); // 256 x 256 pixels
    btexture2[3] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/log_birch.png"); // 256 x 256 pixels
    btexture[104] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/log_birch_top.png"); // 256 x 256 pixels
    btexture2[4] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/log_jungle.png"); // 256 x 256 pixels
    btexture[105] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/log_jungle_top.png"); // 256 x 256 pixels
    btexture2[5] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/log_spruce.png"); // 256 x 256 pixels
    btexture[106] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/log_spruce_top.png"); // 256 x 256 pixels
    btexture2[6] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/hay_block_side.png"); // 256 x 256 pixels
    btexture[107] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/hay_block_top.png"); // 256 x 256 pixels
    btexture2[7] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/bookshelf.png"); // 256 x 256 pixels
    btexture[108] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/planks_oak.png"); // 256 x 256 pixels
    btexture2[8] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/quartz_block_lines.png"); // 256 x 256 pixels
    btexture[109] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/quartz_block_lines_top.png"); // 256 x 256 pixels
    btexture2[9] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/crafting_table_front.png"); // 256 x 256 pixels
    btexture[110] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/crafting_table_side.png"); // 256 x 256 pixels
    ctable[0] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/crafting_table_top.png"); // 256 x 256 pixels
    ctable[1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/grass_side.png"); // 256 x 256 pixels
    btexture[111] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/grass_top.png"); // 256 x 256 pixels
    harom1[0] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/dirt.png"); // 256 x 256 pixels
    harom2[0] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/door_wood_upper.png"); // 256 x 256 pixels
    btexture[112] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/door_wood_lower.png"); // 256 x 256 pixels
    ajt[0] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/door_acacia_upper.png"); // 256 x 256 pixels
    btexture[113] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/door_acacia_lower.png"); // 256 x 256 pixels
    ajt[1] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/door_birch_upper.png"); // 256 x 256 pixels
    btexture[114] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/door_birch_lower.png"); // 256 x 256 pixels
    ajt[2] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/door_dark_oak_upper.png"); // 256 x 256 pixels
    btexture[115] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/door_dark_oak_lower.png"); // 256 x 256 pixels
    ajt[3] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/door_iron_upper.png"); // 256 x 256 pixels
    btexture[116] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/door_iron_lower.png"); // 256 x 256 pixels
    ajt[4] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/door_jungle_upper.png"); // 256 x 256 pixels
    btexture[117] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/door_jungle_lower.png"); // 256 x 256 pixels
    ajt[5] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/door_spruce_upper.png"); // 256 x 256 pixels
    btexture[118] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/door_spruce_lower.png"); // 256 x 256 pixels
    ajt[6] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/tallgrass.png"); // 256 x 256 pixels
    btexture[119] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/sapling_acacia.png"); // 256 x 256 pixels
    btexture[120] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/sapling_birch.png"); // 256 x 256 pixels
    btexture[121] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/sapling_jungle.png"); // 256 x 256 pixels
    btexture[122] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/sapling_oak.png"); // 256 x 256 pixels
    btexture[123] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/sapling_roofed_oak.png"); // 256 x 256 pixels
    btexture[124] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/sapling_spruce.png"); // 256 x 256 pixels
    btexture[125] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/flower_allium.png"); // 256 x 256 pixels
    btexture[126] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/flower_blue_orchid.png"); // 256 x 256 pixels
    btexture[127] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/flower_dandelion.png"); // 256 x 256 pixels
    btexture[128] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/flower_houstonia.png"); // 256 x 256 pixels
    btexture[129] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/flower_oxeye_daisy.png"); // 256 x 256 pixels
    btexture[130] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/flower_rose.png"); // 256 x 256 pixels
    btexture[131] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/flower_tulip_orange.png"); // 256 x 256 pixels
    btexture[132] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/flower_tulip_pink.png"); // 256 x 256 pixels
    btexture[133] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/flower_tulip_red.png"); // 256 x 256 pixels
    btexture[134] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/flower_tulip_white.png"); // 256 x 256 pixels
    btexture[135] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/flower_paeonia.png"); // 256 x 256 pixels
    btexture[136] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/fern.png"); // 256 x 256 pixels
    btexture[137] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/deadbush.png"); // 256 x 256 pixels
    btexture[138] = al_get_opengl_texture(myture);

    myture = al_load_bitmap("texture/sugar_cane.png"); // 256 x 256 pixels
    btexture[139] = al_get_opengl_texture(myture);


}

void kilenc(){

    glLoadIdentity(); //clear ...
    gluLookAt (dX/2,dY/2,-300.0,dX/2+cos(asdgr(0.0))*cos(asdgr(90.0)),dY/2+sin(asdgr(0.0)),-300+cos(asdgr(0.0))*sin(asdgr(90.0)),0,1,0);//CameraX , CameraY, CameraZ, SceneX, SceneY, SceneZ, UpVectorApexX, UpVectorApexY, UpVectorApexZ );


int a;
    for(int i=9; i>0; i--){
    if(szamok==szamertek[10-i]){a=i;}
    else al_draw_rectangle(dX/2-(140.0-(30*i)),dY/2+264,dX/2-(110.0-(30*i)),dY/2+294,al_map_rgb(255,255,255),2);}

    if(szamok!=0) al_draw_rectangle(dX/2-(140.0-(30*a)),dY/2+264,dX/2-(110.0-(30*a)),dY/2+294,al_map_rgb(0,0,255),3);

    al_draw_line(dX/2,dY/2-10,dX/2,dY/2+10,al_map_rgb(255,255,255),2);
    al_draw_line(dX/2-10,dY/2,dX/2+10,dY/2,al_map_rgb(255,255,255),2);

}


void ikonok(){

glLoadIdentity(); //clear ...
gluLookAt (dX/2,dY/2,300,dX/2+cos(asdgr(0))*cos(asdgr(-90)),dY/2+sin(asdgr(0)),300+cos(asdgr(0))*sin(asdgr(-90)),0,1,0);//CameraX , CameraY, CameraZ, SceneX, SceneY, SceneZ, UpVectorApexX, UpVectorApexY, UpVectorApexZ );

for(int i=1; i<=9; i++){

glBindTexture(GL_TEXTURE_2D, btexture[szamertek[10-i]]);

glBegin(GL_QUADS);
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(dX/2+(110-(i-1)*30),dY/2+294, 0); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(dX/2+(80-(i-1)*30), dY/2+294,0); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(dX/2+(80-(i-1)*30),dY/2+264,0);// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(dX/2+(110-(i-1)*30),dY/2+264, 0); // X,Y,Z
glEnd();}

}

int invdb=0;

void inventek(){
invdb=0;

glLoadIdentity(); //clear ...
gluLookAt (dX/2,dY/2,300,dX/2+cos(asdgr(0))*cos(asdgr(-90)),dY/2+sin(asdgr(0)),300+cos(asdgr(0))*sin(asdgr(-90)),0,1,0);//CameraX , CameraY, CameraZ, SceneX, SceneY, SceneZ, UpVectorApexX, UpVectorApexY, UpVectorApexZ );

for(int f=0; f<16; f++){
for(int i=-2; i<=9; i++){
invdb++;
glBindTexture(GL_TEXTURE_2D, btexture[invdb]);
glBegin(GL_QUADS);
glTexCoord2f(0.0, 0.0); // Bottom left hand corner
glVertex3f(dX/2+(65-(i-1)*30),dY/2+(250-(30*f)),0); // X,Y,Z
glTexCoord2f(1.0, 0.0); // Bottom right hand corner
glVertex3f(dX/2+(35-(i-1)*30),dY/2+(250-(30*f)),0); // X,Y,Z
glTexCoord2f(1.0, 1.0); // Top right hand corner
glVertex3f(dX/2+(35-(i-1)*30),dY/2+(220-(30*f)),0);// X,Y,Z
glTexCoord2f(0.0, 1.0); // Top left hand corner
glVertex3f(dX/2+(65-(i-1)*30),dY/2+(220-(30*f)),0); // X,Y,Z
glEnd();}}

}

void invent(){

    szambil();
    kilenc();
    ikonok();

    inventek();

    glLoadIdentity(); //clear ...
    gluLookAt (dX/2,dY/2,-300.0,dX/2+cos(asdgr(0.0))*cos(asdgr(90.0)),dY/2+sin(asdgr(0.0)),-300+cos(asdgr(0.0))*sin(asdgr(90.0)),0,1,0);//CameraX , CameraY, CameraZ, SceneX, SceneY, SceneZ, UpVectorApexX, UpVectorApexY, UpVectorApexZ );
int aidb=0;
for(int f=0; f<=15; f++){
    for(int i=-1; i<11; i++){
    aidb++;
    if(inventegerpoz(9-i,f)==1){iax=i; iay=f; iadb=aidb;}
    else al_draw_rectangle(dX/2-(125.0-(30*i)),dY/2+(220-(30*f)),dX/2-(95.0-(30*i)),dY/2+(250-(30*f)),al_map_rgb(255,255,255),2);}

    if(iax!=-2)al_draw_rectangle(dX/2-(125.0-(30*iax)),dY/2+(220-(30*iay)),dX/2-(95.0-(30*iax)),dY/2+(250-(30*iay)),al_map_rgb(0,0,255),3);}

if(iax!=-2) szamertekad();

    al_flip_display();

}

#endif
                    ///Írta és rendezte: Egri Krisztofer///
