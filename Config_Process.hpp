/*
*   class:
*       MaterialsReq (Needed to process) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       MaterialsGive (Returned items) = Array - Format -> {{"ITEM CLASS",HOWMANY}}
*       Text (Progess Bar Text) = Localised String
*       NoLicenseCost (Cost to process w/o license) = Scalar
*
*   Example for multiprocess:
*
*   class Example {
*       MaterialsReq[] = {{"cocaine_processed",1},{"heroin_processed",1}};
*       MaterialsGive[] = {{"diamond_cut",1}};
*       Text = "STR_Process_Example";
*       //ScrollText = "Process Example";
*       NoLicenseCost = 4000;
*   };
*/

class ProcessAction {
    class oil {
        MaterialsReq[] = {{"oil_unprocessed",1}};
        MaterialsGive[] = {{"oil_processed",1}};
        Text = "STR_Process_Oil";
        //ScrollText = "Process Oil";
        NoLicenseCost = 3000;
    };

    class apples {
        MaterialsReq[] = {{"apples",1}};
        MaterialsGive[] = {{"cider",1}};
        Text = "STR_Process_cider";
        //ScrollText = "Process Oil";
        NoLicenseCost = 3000;
    };
	
    class grape {
        MaterialsReq[] = {{"grape",1}};
        MaterialsGive[] = {{"wine",1}};
        Text = "STR_Process_wine";
        //ScrollText = "Process Oil";
        NoLicenseCost = 4500;
    };
	
    class rye {
        MaterialsReq[] = {{"rye",1}};
        MaterialsGive[] = {{"beer",1}};
        Text = "STR_Process_rye";
        //ScrollText = "Process Oil";
        NoLicenseCost = 6000;
    };
	
    class diamond {
        MaterialsReq[] = {{"diamond_uncut",1}};
        MaterialsGive[] = {{"diamond_cut",1}};
        Text = "STR_Process_Diamond";
        //ScrollText = "Cut Diamonds";
        NoLicenseCost = 2000;
    };

    class heroin {
        MaterialsReq[] = {{"heroin_unprocessed",1}};
        MaterialsGive[] = {{"heroin_processed",1}};
        Text = "STR_Process_Heroin";
        //ScrollText = "Process Heroin";
        NoLicenseCost = 12000;
    };
	
    class LSD {
        MaterialsReq[] = {{"LSDu",1}};
        MaterialsGive[] = {{"LSDp",1}};
        Text = "STR_Process_LSD";
        //ScrollText = "Process Heroin";
        NoLicenseCost = 12500;
    };

    class copper {
        MaterialsReq[] = {{"copper_unrefined",1}};
        MaterialsGive[] = {{"copper_refined",1}};
        Text = "STR_Process_Copper";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 3500;
    };

    class silver {
        MaterialsReq[] = {{"silveru",1}};
        MaterialsGive[] = {{"silverp",1}};
        Text = "STR_Process_silver";
        //ScrollText = "Refine Copper";
        NoLicenseCost = 4000;
    };
	
    class iron {
        MaterialsReq[] = {{"iron_unrefined",1}};
        MaterialsGive[] = {{"iron_refined",1}};
        Text = "STR_Process_Iron";
        //ScrollText = "Refine Iron";
        NoLicenseCost = 5000;
    };

    class sand {
        MaterialsReq[] = {{"sand",1}};
        MaterialsGive[] = {{"glass",1}};
        Text = "STR_Process_Sand";
        //ScrollText = "Melt Sand into Glass";
        NoLicenseCost = 650;
    };

    class salt {
        MaterialsReq[] = {{"salt_unrefined",1}};
        MaterialsGive[] = {{"salt_refined",1}};
        Text = "STR_Process_Salt";
        //ScrollText = "Refine Salt";
        NoLicenseCost = 450;
    };

    class cocaine {
        MaterialsReq[] = {{"cocaine_unprocessed",1}};
        MaterialsGive[] = {{"cocaine_processed",1}};
        Text = "STR_Process_Cocaine";
        //ScrollText = "Process Cocaine";
        NoLicenseCost = 10500;
    };

    class yeast {
        MaterialsReq[] = {{"yeastu",1}};
        MaterialsGive[] = {{"yeastp",1}};
        Text = "STR_Process_yeast";
        //ScrollText = "Process Cocaine";
        NoLicenseCost = 6500;
    };
	
    class meth {
        MaterialsReq[] = {{"methu",1}};
        MaterialsGive[] = {{"methp",1}};
        Text = "STR_Process_meth";
        //ScrollText = "Cook Meth";
        NoLicenseCost = 15000;
    };
	
    class marijuana {
        MaterialsReq[] = {{"cannabis",1}};
        MaterialsGive[] = {{"marijuana",1}};
        Text = "STR_Process_Marijuana";
        //ScrollText = "Harvest Marijuana";
        NoLicenseCost = 7500;
    };

    class cement {
        MaterialsReq[] = {{"rock",1}};
        MaterialsGive[] = {{"cement",1}};
        Text = "STR_Process_Cement";
        //ScrollText = "Mix Cement";
        NoLicenseCost = 350;
    };
};
