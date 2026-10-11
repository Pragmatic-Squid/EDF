#define TEast       0
#define TWest       1
#define TGuerrila   2
#define TCivilian   3

#define private     0
#define protected   1
#define public      2

// ---------------------------------------------------------------------------
// EDF common equipment
// ---------------------------------------------------------------------------

#define Mag_556 \
    "ACE_30Rnd_556x45_B_Stanag", \
    "ACE_30Rnd_556x45_B_Stanag", \
    "ACE_30Rnd_556x45_B_Stanag", \
    "ACE_30Rnd_556x45_B_Stanag", \
    "ACE_30Rnd_556x45_B_Stanag"

// Common grenades/smoke. Throw/Put are listed as weapons below.
#define Mag_Grenades \
    "ACE_HandGrenade", \
    "ACE_HandGrenade", \
    "ACE_SmokeGrenade_White", \
    "ACE_SmokeGrenade_Red"

// Standard infantry magazines.
// ACE's PDM magazines are intentionally not included here: those are the
// ACE persistence/drop variants found in the reference list, not normal
// carried ammunition.
#define Mag_Infantry \
    Mag_556, \
    Mag_Grenades, \
    "ACE_Bandage", \
    "ACE_Bandage"

#define Mag_Medic \
    "ACE_Bandage", \
    "ACE_Bandage", \
    "ACE_Bandage", \
    "ACE_Bandage", \
    "ACE_Bandage", \
    "ACE_Bandage", \
    "ACE_Morphine", \
    "ACE_Morphine", \
    "ACE_Morphine", \
    "ACE_Epinephrine", \
    "ACE_Epinephrine"


// ---------------------------------------------------------------------------
// CfgPatches
// ---------------------------------------------------------------------------

class CfgPatches
{
    class EDF_Core
    {
        units[] =
        {
            "EDF_Soldier",
            "EDF_Medic",
            "EDF_AutoRifleman",
            "EDF_TeamLeader",
            "EDF_Grenadier",
            "EDF_AT",
            "EDF_SF_Soldier",
            "EDF_SF_Medic",
			"EDF_Marksman"
        };

        weapons[] = {};

        requiredVersion = 1.00;

        requiredAddons[] =
        {
        };
    };
};

// ---------------------------------------------------------------------------
// Faction
// ---------------------------------------------------------------------------

class CfgFactionClasses
{
    class EDF
    {
        displayName = "Everon Defense Forces";
        side = TWest;
    };
};

// ---------------------------------------------------------------------------
// Editor vehicle classes
// ---------------------------------------------------------------------------

class CfgVehicleClasses
{
    class EDF_ActiveInfantry
    {
        displayName = "EDF Active Infantry";
    };

    class EDF_Special_Forces
    {
        displayName = "EDF Special Forces";
    };
};

// ---------------------------------------------------------------------------
// Units
// ---------------------------------------------------------------------------

class CfgVehicles
{
    class ACE_SoldierWB;
    class ACE_SoldierWG;
    class ACE_SoldierWMedic;
    class ACE_SoldierWAR;
    class ACE_SoldierWAT;
    class ACE_SoldierWSniper;
    class ACE_TeamLeaderW;
    class ACE_SoldierWDM;
    class ACE_USMC0311A;    // USMC Base
    class ACE_SoldierWB_USSF_LRSD;   // Special Forces Base


    // -----------------------------------------------------------------------
    // Rifleman
    // -----------------------------------------------------------------------

    class EDF_Soldier : ACE_SoldierWB
    {
        scope = public;
        displayName = "EDF Rifleman";
        faction = "EDF";
        vehicleClass = "EDF_ActiveInfantry";
		picture="\Ca\characters\data\Ico\i_null_CA.paa";
		Icon= "\Ca\characters\data\map_ico\i_wojak_CA.paa";

		model = "\edf_characters\edf_soldier_b.p3d";

        // class Wounds
        // {
        //    tex[] = {};
        //    mat[] =
        //    {
        //        "ca\characters\data\us_rukavy_hhl.rvmat",
        //        "ca\characters\data\us_rukavy_hhl_wound1.rvmat",
        //        "ca\characters\data\us_rukavy_hhl_wound2.rvmat",
		//
        //        "edf_characters\data\edf_body.rvmat",
        //        "edf_characters\data\edf_body_wound1.rvmat",
        //        "edf_characters\data\edf_body_wound2.rvmat"
        //    };
        // };

        weapons[] =
        {
            "ACE_HK416_aimpoint",
            "ACE_Binocular",
            "NVGoggles",
            "Throw",
            "Put"
        };

        magazines[] =
        {
            Mag_Infantry
        };
    };


    // -----------------------------------------------------------------------
    // Medic
    // -----------------------------------------------------------------------

    class EDF_Medic : ACE_SoldierWMedic
    {
        displayName = "EDF Medic";
        faction = "EDF";
        vehicleClass = "EDF_ActiveInfantry";
		
		model = "\edf_characters\edf_soldier_b.p3d";

        weapons[] =
        {
            "ACE_HK416_aimpoint",
            "ACE_Binocular",
            "NVGoggles",
            "ACE_Rucksack_MOLLE_Green_Medic",
            "Throw",
            "Put"
        };

        magazines[] =
        {
            Mag_556,
            Mag_Medic,
            Mag_Grenades            
        };
    };


    // -----------------------------------------------------------------------
    // Automatic Rifleman
    // -----------------------------------------------------------------------

    class EDF_AutoRifleman : ACE_SoldierWAR
    {
        displayName = "EDF Automatic Rifleman";
        faction = "EDF";
        vehicleClass = "EDF_ActiveInfantry";
		
		model = "\edf_characters\edf_soldier_b.p3d";
        
        weapons[] =
        {
            "ACE_RPK74M",
            "ACE_Binocular",
            "NVGoggles",
            "ACE_Rucksack_MOLLE_WMARPAT",
            "Throw",
            "Put"
        };

        magazines[] =
        {
            Mag_Grenades,

            "ACE_45Rnd_545x39_B_AK",
            "ACE_45Rnd_545x39_B_AK",
            "ACE_45Rnd_545x39_B_AK",
            "ACE_45Rnd_545x39_B_AK",
            "ACE_45Rnd_545x39_B_AK",

            "ACE_Bandage",
            "ACE_Bandage"
        };
    };


    // -----------------------------------------------------------------------
    // Team Leader
    // -----------------------------------------------------------------------

    class EDF_TeamLeader : ACE_TeamLeaderW
    {
        displayName = "EDF Team Leader";
        faction = "EDF";
        vehicleClass = "EDF_ActiveInfantry";
		
		model = "\edf_characters\edf_soldier_b.p3d";

        weapons[] =
        {
            "ACE_HK416_eotech",
            "ACE_Binocular",
            "NVGoggles",
            "Throw",
            "Put"
        };

        magazines[] =
        {
            Mag_Infantry
        };
    };


    // -----------------------------------------------------------------------
    // Grenadier
    // -----------------------------------------------------------------------

    class EDF_Grenadier : ACE_SoldierWG
    {
        displayName = "EDF Grenadier";
        faction = "EDF";
        vehicleClass = "EDF_ActiveInfantry";
		
		model = "\edf_characters\edf_soldier_b.p3d";

        weapons[] =
        {
            "ACE_HK416_eotech_gl",
            "ACE_Binocular",
            "NVGoggles",
            "ACE_Rucksack_MOLLE_WMARPAT",
            "Throw",
            "Put"
        };

        magazines[] =
        {
            Mag_556,
            Mag_Grenades,

            "ACE_40mm_HEDP_M203",
            "ACE_40mm_HEDP_M203",
            "ACE_40mm_HEDP_M203",
            "ACE_40mm_HEDP_M203",
            "ACE_40mm_HEDP_M203",
            "ACE_40mm_HEDP_M203",
            
            "ACE_Bandage",
            "ACE_Bandage"
        };
    };


    // -----------------------------------------------------------------------
    // Anti-Tank Rifleman
    // -----------------------------------------------------------------------

    class EDF_AT : ACE_SoldierWAT
    {
        displayName = "EDF Anti-Tank Rifleman";
        faction = "EDF";
        vehicleClass = "EDF_ActiveInfantry";
		
		model = "\edf_characters\edf_soldier_b.p3d";

        weapons[] =
        {
            "ACE_HK416_eotech",
            "ACE_M136",
            "ACE_Binocular",
            "NVGoggles",
            "ACE_Rucksack_MOLLE_WMARPAT",
            "Throw",
            "Put"
        };

        magazines[] =
        {
            Mag_Infantry,
            "ACE_AT4_HEAT"
        };
    };
    
    // -----------------------------------------------------------------------
    // EDF Marksman
    // -----------------------------------------------------------------------

    class EDF_Marksman : ACE_SoldierWDM
    {
        displayName = "EDF Marksman";
        faction = "EDF";
        vehicleClass = "EDF_ActiveInfantry";
		
		model = "\edf_characters\edf_soldier_b.p3d";

        weapons[] =
        {
            "ACE_HK417C_ACOG",
            "ACE_Binocular",
            "NVGoggles",
            "Throw",
            "Put"
        };

        respawnWeapons[] =
        {
            "ACE_HK417_ACOG",
            "ACE_Binocular",
            "NVGoggles",
            "Throw",
            "Put"
        };

        magazines[] =
        {
            "ACE_20Rnd_762x51_B_HK417",
            "ACE_20Rnd_762x51_B_HK417",
            "ACE_20Rnd_762x51_B_HK417",
            "ACE_20Rnd_762x51_B_HK417",
            "ACE_20Rnd_762x51_B_HK417",
            "ACE_20Rnd_762x51_B_HK417",

            Mag_Grenades,

            "ACE_Bandage",
            "ACE_Bandage"
        };

        respawnMagazines[] =
        {
            "ACE_20Rnd_762x51_B_HK417",
            "ACE_20Rnd_762x51_B_HK417",
            "ACE_20Rnd_762x51_B_HK417",
            "ACE_20Rnd_762x51_B_HK417",
            "ACE_20Rnd_762x51_B_HK417",
            "ACE_20Rnd_762x51_B_HK417",

            Mag_Grenades,

            "ACE_Bandage",
            "ACE_Bandage"
        };
    };


    // -----------------------------------------------------------------------
    // EDF Special Forces
    // -----------------------------------------------------------------------

    // -----------------------------------------------------------------------
    // EDF SF Rifleman
    // -----------------------------------------------------------------------

    class EDF_SF_Soldier : ACE_SoldierWB_USSF_LRSD
    {
        scope = public;
        displayName = "EDF SF Rifleman";
        faction = "EDF";
        vehicleClass = "EDF_Special_Forces";
		
		model = "\edf_characters\edf_soldier_b.p3d";
        
        weapons[] =
        {
            "ACE_SCAR_L_CQB_EOtech_SD",
            "ACE_Binocular",
            "NVGoggles",
            "ACE_Rucksack_MOLLE_WMARPAT",
            "Throw",
            "Put"
        };

        magazines[] =
        {
            Mag_556
        };
    };

    // -----------------------------------------------------------------------
    // EDF SF Medic
    // -----------------------------------------------------------------------

    class EDF_SF_Medic : EDF_SF_Soldier
    {
        displayName = "EDF SF Medic";
        attendant = 1;
        nameSound = "medic";
		
		model = "\edf_characters\edf_soldier_b.p3d";
        
        weapons[] =
        {
            "ACE_SCAR_L_CQB_EOtech_SD",
            "ACE_Binocular",
            "NVGoggles",
            "Throw",
            "Put"
        };

        magazines[] =
        {
            Mag_556,
            Mag_Medic
        };

        class Wounds {
			tex[] = {};
			mat[] = {"ca\characters\data\us_spec_hhl.rvmat", "ca\characters\data\us_spec_hhl_wound1.rvmat", "ca\characters\data\us_spec_hhl_wound2.rvmat", "joh_armysf\data\armysf_med.rvmat", "joh_armysf\data\armysf_med_wound1.rvmat", "joh_armysf\data\armysf_med_wound2.rvmat"};
		};
    };
};
