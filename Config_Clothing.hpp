/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
            { "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
            { "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
            { "U_NikosAgedBody", "Casual Wears", 5000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
            { "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
            { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
            { "H_Bandanna_surfer", "", 135, { "", "", -1 } },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
            { "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
            { "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
            { "H_Booniehat_tan", "", 425, { "", "", -1 } },
            { "H_Hat_blue", "", 310, { "", "", -1 } },
            { "H_Hat_brown", "", 276, { "", "", -1 } },
            { "H_Hat_checker", "", 340, { "", "", -1 } },
            { "H_Hat_grey", "", 280, { "", "", -1 } },
            { "H_Hat_tan", "", 265, { "", "", -1 } },
            { "H_Cap_blu", "", 150, { "", "", -1 } },
            { "H_Cap_grn", "", 150, { "", "", -1 } },
            { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
            { "H_Cap_oli", "", 150, { "", "", -1 } },
            { "H_Cap_red", "", 150, { "", "", -1 } },
            { "H_Cap_tan", "", 150, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_CombatUniform_mcam", "Cop Uniform", 0, { "", "", -1 } },
			{ "U_B_FullGhillie_sard", "", 0, { "life_coplevel", "SCALAR", 9 } },
			{ "U_B_GEN_Commander_F", "", 0, { "life_coplevel", "SCALAR", 4 } },
			{ "U_B_FullGhillie_ard", "", 0, { "life_coplevel", "SCALAR", 7 } },
			{ "U_B_FullGhillie_lsh", "", 0, { "life_coplevel", "SCALAR", 7 } },
			{ "U_B_CTRG_Soldier_F", "", 0, { "life_coplevel", "SCALAR", 7 } },
            { "U_B_PilotCoveralls", "", 0, { "life_coplevel", "SCALAR", 3 } },
			{ "U_B_CTRG_3", "", 0, { "life_coplevel", "SCALAR", 2 } }
        };
        headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_HelmetB_plain_mcamo", "", 0, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Cap_police", "", 0, { "life_coplevel", "SCALAR", 1 } },
			{ "H_Beret_02", "", 0, { "life_coplevel", "SCALAR", 7 } },
			{ "H_Beret_ocamo", "", 0, { "life_coplevel", "SCALAR", 7 } },
			{ "H_Beret_02", "", 0, { "life_coplevel", "SCALAR", 7 } },
			{ "H_Beret_gen_F", "", 0, { "life_coplevel", "SCALAR", 7 } },
			{ "H_Beret_Colonel", "", 0, { "life_coplevel", "SCALAR", 7 } },
			{ "H_HelmetB_TI_tna_F", "", 0, { "life_coplevel", "SCALAR", 7 } },
			{ "H_HelmetSpecB_blk", "", 0, { "life_coplevel", "SCALAR", 7 } },
			{ "H_Booniehat_mcamo", "", 0, { "life_coplevel", "SCALAR", 1 } },
			{ "H_MilCap_mcamo", "", 0, { "life_coplevel", "SCALAR", 2 } },
			{ "H_Beret_blk", "", 0, { "life_coplevel", "SCALAR", 4 } },
			{ "H_Watchcap_blk", "", 0, { "life_coplevel", "SCALAR", 3 } },
			{ "H_PilotHelmetFighter_B", "", 0, { "life_coplevel", "SCALAR", 3 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 0, { "", "", -1 } },
			{ "G_Shades_Blue", "", 0, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 0, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 0, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 0, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 0, { "", "", -1 } },
			{ "G_Squares", "", 0, { "", "", -1 } },
			{ "G_Aviator", "", 0, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 0, { "", "", -1 } },
			{ "G_Lady_Dark", "", 0, { "", "", -1 } },
			{ "G_Lady_Blue", "", 0, { "", "", -1 } },
			{ "G_Lowprofile", "", 0, { "", "", -1 } },
			{ "G_Combat", "", 0, { "", "", -1 } },
			{ "G_Bandanna_beast", "", 0, { "life_coplevel", "SCALAR", 7 } },
			{ "G_Balaclava_blk", "", 0, { "life_coplevel", "SCALAR", 7 } },
			{ "G_Balaclava_combat", "", 0, { "life_coplevel", "SCALAR", 7 } },
			{ "G_Balaclava_TI_G_tna_F", "", 0, { "life_coplevel", "SCALAR", 7 } },
			{ "G_Balaclava_TI_blk_F", "", 0, { "life_coplevel", "SCALAR", 7 } },
			{ "G_Balaclava_TI_G_blk_F", "", 0, { "life_coplevel", "SCALAR", 7 } },
			{ "G_Balaclava_lowprofile", "", 0, { "life_coplevel", "SCALAR", 7 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 0, { "", "", -1 } },
			{ "V_TacVest_blk_POLICE", "", 0, { "", "", -1 } },
			{ "V_PlateCarrier2_blk", "", 0, { "", "", -1 } },
			{ "V_Press_F", "", 0, { "", "", -1 } },
			{ "V_PlateCarrier2_rgr_noflag_F", "", 0, { "life_coplevel", "SCALAR", 7 } },
			{ "V_PlateCarrierSpec_blk", "", 0, { "life_coplevel", "SCALAR", 7 } }
        };
        backpacks[] = {
            
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Bergen_blk", "Police Backpack ", 0, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 0, { "", "", -1 } },
			{ "B_FieldPack_cbr", "", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 0, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 0, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 0, { "", "", -1 } },
			{ "NonSteerable_Parachute_F", "", 0, { "life_coplevel", "SCALAR", 3 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 4900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 1900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_CombatUniform_mcam", "EMS Uniform", 50, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_blu", "", 10, { "", "", -1 } },
			{ "H_Cap_oli_hs", "", 10, { "", "", -1 } },
			{ "H_Cap_blk", "", 10, { "", "", -1 } },
			{ "H_Beret_blk", "", 10, { "", "", -1 } },
			{ "H_Cap_grn", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Carryall_oucamo", "EMS Backpack", 3000, { "", "", -1 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
			{ "U_I_G_Story_Protagonist_F", "", 7500, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 11500, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 25000, { "", "", -1 } },
			{ "U_O_PilotCoveralls", "", 15610, { "", "", -1 } },
			{ "U_IG_leader", "Guerilla Leader", 15340, { "", "", -1 } },
			{ "U_O_SpecopsUniform_blk", "", 15000, { "", "", 2 } },
			{ "U_I_CombatUniform", "Combat Fatigues AAF", 35000, { "", "", -1 } },
			{ "U_I_CombatUniform_tshirt", "Combat Fatigues Officer", 30000, { "", "", -1 } },
			{ "U_O_T_Officer_F", "Combat Fatigues Green Hex", 30000, { "", "", -1 } },
			{ "U_I_C_Soldier_Camo_F", "Syndikat Uniform", 30000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_4_F", "Para Garb (tee)", 30000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_3_F", "Para Garb (jacket)", 30000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_2_F", "Para Garb (shirt)", 30000, { "", "", -1 } },
			{ "U_I_C_Soldier_Para_1_F", "Para Garb (shorts)", 30000, { "", "", -1 } },
			{ "U_I_CombatUniform_tshirt", "Combat Fatigues Officer", 30000, { "", "", -1 } },
			{ "U_KerryBody", "Combat Fatigues Kerry", 30000, { "", "", -1 } },
			{ "U_I_G_Story_Protagonist_F", "Combat Fatigues Kerry Worn", 35000, { "", "", -1 } },
			{ "U_MillerBody", "Combat Fatigues Miller", 35000, { "", "", -1 } },
			{ "U_IG_Guerilla2_1", "Guerilla Plain", 25000, { "", "", -1 } },
			{ "U_BG_Guerilla1_1", "Guerilla Garment", 25000, { "", "", -1 } },
			{ "U_OG_leader", "Guerilla Camo", 30000, { "", "", -1 } },
			{ "U_B_CTRG_3", "CTRG Combat Uniform", 35000, { "", "", -1 } },
			{ "U_B_T_Soldier_F", "Combat Fatigues (tropical)", 45000, { "", "", -1 } },
			{ "U_B_survival_uniform", "Survival Fatigues", 48500, { "", "", -1 } },
			{ "U_B_FullGhillie_lsh", "Ghillie Suit (Lush)", 60000, { "", "", -1 } },
			{ "U_B_FullGhillie_ard", "Ghillie Suit (Arid)", 60000, { "", "", -1 } },
			{ "U_O_FullGhillie_lsh", "Ghillie Suit CSAT(Lush)", 60000, { "", "", -1 } },
			{ "U_O_FullGhillie_sard", "Ghillie Suit (Semi-Arid)", 60000, { "", "", -1 } },
			{ "U_O_T_Sniper_F", "Ghillie Suit (Tropical)", 60000, { "", "", -1 } },
			{ "U_I_FullGhillie_lsh", "Ghillie Suit AAF(Lush)", 70000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
			{ "H_Shemag_olive", "", 850, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
			{ "H_Milcap_tna_F", "", 1200, { "", "", -1 } },
			{ "H_Booniehat_tna_F", "", 1200, { "", "", -1 } },
			{ "H_Booniehat_oli", "", 1200, { "", "", -1 } },
			{ "H_Booniehat_indp", "", 1200, { "", "", -1 } },
			{ "H_HelmetSpecB", "", 35000, { "", "", -1 } },
			{ "H_HelmetB_plain_blk", "", 25000, { "", "", -1 } },
			{ "H_HelmetB_camo", "", 20000, { "", "", -1 } },
			{ "H_Helmet_Kerry", "", 30000, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "", 30000, { "", "", -1 } },
			{ "H_HelmetIA_camo", "", 30000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } },
            // BI
            { "G_Balaclava_blk", "", 150, { "", "", -1 } },
            { "G_Balaclava_combat", "", 150, { "", "", -1 } },
            { "G_Balaclava_lowprofile", "", 150, { "", "", -1 } },
            { "G_Balaclava_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_aviator", "", 150, { "", "", -1 } },
            { "G_Bandanna_beast", "", 150, { "", "", -1 } },
            { "G_Bandanna_blk", "", 150, { "", "", -1 } },
            { "G_Bandanna_khk", "", 150, { "", "", -1 } },
            { "G_Bandanna_oli", "", 150, { "", "", -1 } },
            { "G_Bandanna_shades", "", 150, { "", "", -1 } },
            { "G_Bandanna_sport", "", 150, { "", "", -1 } },
            { "G_Bandanna_tan", "", 150, { "", "", -1 } }
        };
		vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_PlateCarrier1_rgr", "", 55000, { "", "", -1 } },
            { "V_PlateCarrier1_blk", "", 55000, { "", "", -1 } },
			{ "V_PlateCarrier2_rgr_noflag_F", "", 65000, { "", "", -1 } },
            { "V_TacVest_oli", "", 45000, { "", "", -1 } },
            { "V_TacVest_camo", "", 45000, { "", "", -1 } },
            { "V_Chestrig_blk", "", 35000, { "", "", -1 } },
            { "V_TacVest_brn", "", 35000, { "", "", -1 } },
            { "V_Chestrig_blk", "", 35000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_AssaultPack_khk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_dgtl", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_sgg", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_blk", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
            { "B_AssaultPack_mcamo", "", 2000, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Kitbag_mcamo", "", 3500, { "", "", -1 } },
            { "B_Kitbag_sgg", "", 3500, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 3500, { "", "", -1 } },
            { "B_Bergen_sgg", "", 6500, { "", "", -1 } },
            { "B_Bergen_mcamo", "", 6500, { "", "", -1 } },
            { "B_Bergen_rgr", "", 6500, { "", "", -1 } },
            { "B_Bergen_blk", "", 6500, { "", "", -1 } },
            { "B_FieldPack_blk", "", 5000, { "", "", -1 } },
            { "B_FieldPack_ocamo", "", 5000, { "", "", -1 } },
            { "B_FieldPack_oucamo", "", 5000, { "", "", -1 } },
            { "B_Carryall_ocamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oucamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_mcamo", "", 7500, { "", "", -1 } },
            { "B_Carryall_oli", "", 7500, { "", "", -1 } },
            { "B_Carryall_khk", "", 7500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 7500, { "", "", -1 } },
            { "B_OutdoorPack_blk", "", 500, { "", "", -1 } }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
	
	class Lawyer {
        title = "STR_Shops_C_Lawyer";
        license = "Lawyer";
        side = "civ";
        uniforms[] = {
            { "U_NikosAgedBody", "Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }

        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
	
};