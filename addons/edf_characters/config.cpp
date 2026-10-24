#include "defines.hpp"

// ---------------------------------------------------------------------------
// CfgPatches
// ---------------------------------------------------------------------------

class CfgPatches
{
    class AFN_Characters
    {
        units[] =
        {
            "AFN_TDF_Rifleman",
            "AFN_TDF_Medic",
            "AFN_TDF_Grenadier",
            "AFN_TDF_AutomaticRifleman",
            "AFN_TDF_AntiTank",
            "AFN_TDF_TeamLeader",
            "AFN_TDF_Crewman",
            "AFN_TDF_Sniper",
            "AFN_TDF_Marksman",
            "AFN_TDF_Marksman_SVD",
            "AFN_LF_Rifleman",
            "AFN_LF_Grenadier",
            "AFN_LF_Medic",
            "AFN_LF_AutomaticRifleman",
            "AFN_LF_AntiTank",
            "AFN_LF_TeamLeader",
            "AFN_LF_Sniper",
            "AFN_LF_Marksman",
            "AFN_LF_Marksman_SVD",
            "AFN_LF_Crewman"
        };

        weapons[] = {};

        requiredVersion = 1.14;

        requiredAddons[] =
        {
            "CACharacters"
        };
    };
};

// ---------------------------------------------------------------------------
// Faction
// ---------------------------------------------------------------------------

class CfgFactionClasses
{
    class AFN
    {
        displayName = "Armed Forces of Nogova";
        side = West;
    };
};

// ---------------------------------------------------------------------------
// Editor vehicle classes
// ---------------------------------------------------------------------------

class CfgVehicleClasses
{
    class AFN_TerritorialDefenseForces {
        displayName = "AFN Territorial Defense Forces";
    };

    class AFN_LandForces {
        displayName = "AFN Land Forces";
    };

    class AFN_SpecialOperationForces {
        displayName = "AFN Special Operation Forces";
    };
};

// ---------------------------------------------------------------------------
// Units
// ---------------------------------------------------------------------------

class CfgVehicles
{
    class SoldierWB;

    class AFN_SoldierBase : SoldierWB
    {
        scope = protected;
        side = West;
        faction = "AFN";
    };

    // -----------------------------------------------------------------------
    // Territorial Defense Forces
    // -----------------------------------------------------------------------

    class AFN_TDF_Rifleman : AFN_SoldierBase
    {
        scope = public;
        vehicleClass = "AFN_TerritorialDefenseForces";
        displayName = "AFN TDF Rifleman";

        picture="\Ca\characters\data\Ico\i_null_CA.paa";
        Icon= "\Ca\characters\data\map_ico\i_wojak_CA.paa";
        model = "\edf_characters\edf_tdf_soldier_b.p3d";

        accuracy = 0.7;
        cost = 40000;

        weapons[] = {
            "AK74",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            TDF_DEFAULT_GRENADES
        };

        respawnWeapons[] = {
            "AK74",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            TDF_DEFAULT_GRENADES
        };

        class Wounds
        {
            tex[]={};
            mat[]={
                "ca\characters\data\us_rukavy_hhl.rvmat",
                "ca\characters\data\us_rukavy_hhl_wound1.rvmat",
                "ca\characters\data\us_rukavy_hhl_wound2.rvmat",
                "ca\characters\data\us_soldier_b_body.rvmat",
                "ca\characters\data\us_soldier_b_body_wound1.rvmat",
                "ca\characters\data\us_soldier_b_body_wound2.rvmat"
            };
        };
    };

    class AFN_TDF_Grenadier : AFN_TDF_Rifleman {
        displayName = "AFN TDF Grenadier";
        nameSound = "grenadier";

        model = "\edf_characters\edf_tdf_soldier_g.p3d";

        cost=60000;
        accuracy = 1000; // never recognized

        weapons[] = {
            "AK74GL",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            GP25_GRENADES_8,
            TDF_DEFAULT_GRENADES
        };

        respawnWeapons[] = {
            "AK74GL",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            GP25_GRENADES_8,
            TDF_DEFAULT_GRENADES
        };
    };

    class AFN_TDF_Medic : AFN_TDF_Rifleman {
        displayName = "AFN TDF Medic";
        nameSound = "medic2";

        model = "\edf_characters\edf_soldier_medic.p3d";
        picture = "\Ca\characters\data\Ico\i_Med_CA.paa";
        Icon = "\Ca\characters\data\map_ico\i_medyk_CA.paa";

        accuracy=1000; // never recognized
        cost = 60000;
        attendant = true;
        weaponSlots = WeaponSlotPrimary + WeaponSlotSecondary + 8 * WeaponSlotItem + 2 * WeaponSlotBinocular + WeaponSlotHandGun + 4*WeaponSlotHandGunItem;

        class Wounds
        {
            tex[]={};
            mat[]={
                "ca\characters\data\us_hhl.rvmat",
                "ca\characters\data\us_hhl_wound1.rvmat",
                "ca\characters\data\us_hhl_wound2.rvmat",
                "ca\characters\data\us_soldier_medic_body.rvmat",
                "ca\characters\data\us_soldier_medic_body_wound1.rvmat",
                "ca\characters\data\us_soldier_medic_body_wound2.rvmat"
            };
        };
    };

    class AFN_TDF_AutomaticRifleman: AFN_TDF_Rifleman
    {
        displayName = "AFN TDF Automatic Rifleman";
        nameSound = "machineGunner";

        model = "\edf_characters\edf_tdf_soldier_ar.p3d";

        accuracy = 1.5;
        cost = 60000;
        threat[] = {1, 0.1, 0.8};

        weapons[] = {
            "PK",
            DefaultEquip
        };

        magazines[] = {
            PK_MAGAZINES_4,
            HANDGRENADE_2
        };

        respawnWeapons[] = {
            "PK",
            DefaultEquip
        };

        respawnMagazines[] = {
            PK_MAGAZINES_4,
            HANDGRENADE_2
        };

        class Wounds
        {
            tex[]={};
            mat[]={
                "ca\characters\data\us_hhl.rvmat",
                "ca\characters\data\us_hhl_wound1.rvmat",
                "ca\characters\data\us_hhl_wound2.rvmat",
                "ca\characters\data\us_soldier_ar_body.rvmat",
                "ca\characters\data\us_soldier_ar_body_wound1.rvmat",
                "ca\characters\data\us_soldier_ar_body_wound2.rvmat"
            };
        };
    };

    class AFN_TDF_AntiTank: AFN_TDF_Rifleman
    {
        displayName = "AFN TDF AT Soldier";
        nameSound = "missileSoldier";

        model = "\edf_characters\edf_tdf_soldier_at.p3d";

        accuracy=1.5;
        cost=150000;
        nightVision=true;
        threat[]={1, 0.9, 0.1};

        weapons[] = {
            "AK74",
            "RPG7V",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            RPG7_ROUNDS_3,
            TDF_DEFAULT_GRENADES
        };

        respawnWeapons[] = {
            "AK74",
            "RPG7V",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            RPG7_ROUNDS_3,
            TDF_DEFAULT_GRENADES
        };
    };

    class AFN_TDF_TeamLeader : AFN_TDF_Rifleman {
        displayName = "AFN TDF Team Leader";

        Picture= "\Ca\characters\data\Ico\i_tleader_CA.paa";
        Icon= "\Ca\characters\data\map_ico\i_lider_CA.paa";
        model = "\edf_characters\edf_tdf_soldier.p3d";

        accuracy=2.0;
        cost=600000;
        nightVision=true;

        weapons[] = {
            "AK74",
            "Binocular",
            "NVGoggles",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            TDF_DEFAULT_GRENADES
        };

        respawnWeapons[] = {
            "AK74",
            "Binocular",
            "NVGoggles",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            TDF_DEFAULT_GRENADES
        };
    };

    class AFN_TDF_Sniper : AFN_TDF_Rifleman {
        displayName = "AFN TDF Sniper";
        nameSound="sniper";

        Picture = "\Ca\characters\data\Ico\i_SF_CA.paa";
        Icon = "\Ca\characters\data\map_ico\i_wojak_CA.paa";
        model = "\edf_characters\edf_tdf_soldier.p3d";

        accuracy = 3.5;
        nightVision = true;
        cost = 250000;
        sensitivity = 2;
        camouflage = 0.6;
        threat[] = {1, 0.1, 0.1};

        weapons[] = {
            "SVD",
            "Makarov",
            "Binocular",
            DefaultEquip
        };

        magazines[] = {
            SVD_MAGAZINES_6,
            MAKAROV_MAGAZINES_4
        };

        respawnWeapons[]={
            "SVD",
            "Makarov",
            "Binocular",
            DefaultEquip
        };

        respawnMagazines[] = {
            SVD_MAGAZINES_6,
            MAKAROV_MAGAZINES_4
        };
    };

    class AFN_TDF_Marksman : AFN_TDF_Rifleman
    {
        displayName = "AFN TDF Marksman";

        model = "\edf_characters\edf_tdf_soldier.p3d";

        weapons[] = {
            "aks74pso",
            "MakarovSD",
            "NVGoggles",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            MAKAROV_SD_MAGAZINES_4,
            TDF_DEFAULT_GRENADES
        };

        respawnWeapons[] = {
            "aks74pso",
            "MakarovSD",
            "NVGoggles",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            MAKAROV_SD_MAGAZINES_4,
            TDF_DEFAULT_GRENADES
        };
    };

    class AFN_TDF_Marksman_SVD : AFN_TDF_Marksman
    {
        displayName = "AFN TDF Marksman (SVD)";

        weapons[] = {
            "SVD",
            "Makarov",
            "NVGoggles",
            DefaultEquip
        };

        magazines[] = {
            SVD_MAGAZINES_6,
            MAKAROV_MAGAZINES_4
        };

        respawnWeapons[] = {
            "SVD",
            "Makarov",
            "NVGoggles",
            DefaultEquip
        };

        respawnMagazines[] = {
            SVD_MAGAZINES_6,
            MAKAROV_MAGAZINES_4
        };
    };

    class AFN_TDF_Crewman : AFN_TDF_Rifleman {
        displayName = "AFN TDF Crew";
        nameSound = "crew";

        model = "\edf_characters\edf_tdf_soldier.p3d";

        accuracy = 1000; // never recognize

        weapons[] = {
            "AKS74U",
            "Makarov",
            "NVGoggles",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            MAKAROV_MAGAZINES_4,
            SMOKE_SHELL_GREEN_2
        };

        respawnWeapons[] = {
            "AKS74U",
            "Makarov",
            "NVGoggles",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            MAKAROV_MAGAZINES_4,
            SMOKE_SHELL_GREEN_2
        };
    };

    // -----------------------------------------------------------------------
    // Land Forces
    // -----------------------------------------------------------------------

    class AFN_LF_Rifleman : AFN_SoldierBase
    {
        vehicleClass = "AFN_LandForces";
        displayName = "AFN LF Rifleman";

        picture="\Ca\characters\data\Ico\i_null_CA.paa";
        Icon= "\Ca\characters\data\map_ico\i_wojak_CA.paa";
        model = "\edf_characters\edf_rf_soldier_b.p3d";

        accuracy = 0.7;
        cost = 40000;

        weapons[] = {
            "AK74",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            LF_DEFAULT_GRENADES
        };

        respawnWeapons[] = {
            "AK74",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            LF_DEFAULT_GRENADES
        };

        class Wounds
        {
            tex[]={};
            mat[]={
                "ca\characters\data\us_rukavy_hhl.rvmat",
                "ca\characters\data\us_rukavy_hhl_wound1.rvmat",
                "ca\characters\data\us_rukavy_hhl_wound2.rvmat",
                "ca\characters\data\us_soldier_b_body.rvmat",
                "ca\characters\data\us_soldier_b_body_wound1.rvmat",
                "ca\characters\data\us_soldier_b_body_wound2.rvmat"
            };
        };
    };

    class AFN_LF_Grenadier : AFN_LF_Rifleman {
        displayName = "AFN LF Grenadier";
        nameSound = "grenadier";

        model = "\edf_characters\edf_rf_soldier_g.p3d";

        cost=60000;
        accuracy = 1000; // never recognized

        weapons[] = {
            "AK74GL",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            GP25_GRENADES_8,
            LF_DEFAULT_GRENADES
        };

        respawnWeapons[] = {
            "AK74GL",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            GP25_GRENADES_8,
            LF_DEFAULT_GRENADES
        };
    };

    class AFN_LF_Medic : AFN_LF_Rifleman {
        displayName = "AFN LF Medic";
        nameSound = "medic2";

        model = "\\edf_characters\\edf_rf_soldier_b.p3d";
        picture = "\Ca\characters\data\Ico\i_Med_CA.paa";
        Icon = "\Ca\characters\data\map_ico\i_medyk_CA.paa";

        accuracy=1000; // never recognized
        cost = 60000;
        attendant = true;
        weaponSlots = WeaponSlotPrimary + WeaponSlotSecondary + 8 * WeaponSlotItem + 2 * WeaponSlotBinocular + WeaponSlotHandGun + 4*WeaponSlotHandGunItem;
    };

    class AFN_LF_AutomaticRifleman: AFN_LF_Rifleman
    {
        displayName = "AFN LF Automatic Rifleman";
        nameSound = "machineGunner";

        model = "\\edf_characters\\edf_rf_soldier_b.p3d";

        accuracy = 1.5;
        cost = 60000;
        threat[] = {1, 0.1, 0.8};

        weapons[] = {
            "M249",
            DefaultEquip
        };

        magazines[] = {
            M249_MAGAZINES_4,
            HANDGRENADE_TIMED_2
        };

        respawnWeapons[] = {
            "M249",
            DefaultEquip
        };

        respawnMagazines[] = {
            M249_MAGAZINES_4,
            HANDGRENADE_TIMED_2
        };
    };

    class AFN_LF_AntiTank: AFN_LF_Rifleman
    {
        displayName = "AFN LF AT Soldier";
        nameSound = "missileSoldier";

        model = "\\edf_characters\\edf_rf_soldier_b.p3d";

        accuracy=1.5;
        cost=150000;
        nightVision=true;
        threat[]={1, 0.9, 0.1};

        weapons[] = {
            "AK74",
            "RPG7V",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            RPG7_ROUNDS_3,
            LF_DEFAULT_GRENADES
        };

        respawnWeapons[] = {
            "AK74",
            "RPG7V",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            RPG7_ROUNDS_3,
            LF_DEFAULT_GRENADES
        };
    };

    class AFN_LF_TeamLeader : AFN_LF_Rifleman {
        displayName = "AFN LF Team Leader";

        Picture= "\Ca\characters\data\Ico\i_tleader_CA.paa";
        Icon= "\Ca\characters\data\map_ico\i_lider_CA.paa";
        model = "\\edf_characters\\edf_rf_soldier_b.p3d";

        accuracy=2.0;
        cost=600000;
        nightVision=true;

        weapons[] = {
            "AK74",
            "Binocular",
            "NVGoggles",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            LF_DEFAULT_GRENADES
        };

        respawnWeapons[] = {
            "AK74",
            "Binocular",
            "NVGoggles",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            LF_DEFAULT_GRENADES
        };
    };

    class AFN_LF_Sniper : AFN_LF_Rifleman {
        displayName = "AFN LF Sniper";
        nameSound="sniper";

        Picture = "\Ca\characters\data\Ico\i_SF_CA.paa";
        Icon = "\Ca\characters\data\map_ico\i_wojak_CA.paa";
        model = "\\edf_characters\\edf_rf_soldier_b.p3d";

        accuracy = 3.5;
        nightVision = true;
        cost = 250000;
        sensitivity = 2;
        camouflage = 0.6;
        threat[] = {1, 0.1, 0.1};

        weapons[] = {
            "SVD",
            "Makarov",
            "Binocular",
            DefaultEquip
        };

        magazines[] = {
            SVD_MAGAZINES_6,
            MAKAROV_MAGAZINES_4
        };

        respawnWeapons[]={
            "SVD",
            "Makarov",
            "Binocular",
            DefaultEquip
        };

        respawnMagazines[] = {
            SVD_MAGAZINES_6,
            MAKAROV_MAGAZINES_4
        };
    };

    class AFN_LF_Marksman : AFN_LF_Rifleman
    {
        displayName = "AFN LF Marksman";

        model = "\\edf_characters\\edf_rf_soldier_b.p3d";

        weapons[] = {
            "M16A4_ACG",
            "MakarovSD",
            "NVGoggles",
            DefaultEquip
        };

        magazines[] = {
            STANAG_MAGAZINES_6,
            MAKAROV_SD_MAGAZINES_4,
            LF_DEFAULT_GRENADES
        };

        respawnWeapons[] = {
            "M16A4_ACG",
            "MakarovSD",
            "NVGoggles",
            DefaultEquip
        };

        respawnMagazines[] = {
            STANAG_MAGAZINES_6,
            MAKAROV_SD_MAGAZINES_4,
            LF_DEFAULT_GRENADES
        };
    };

    class AFN_LF_Marksman_SVD : AFN_LF_Marksman
    {
        displayName = "AFN LF Marksman (SVD)";

        weapons[] = {
            "SVD",
            "Makarov",
            "NVGoggles",
            DefaultEquip
        };

        magazines[] = {
            SVD_MAGAZINES_6,
            MAKAROV_MAGAZINES_4
        };

        respawnWeapons[] = {
            "SVD",
            "Makarov",
            "NVGoggles",
            DefaultEquip
        };

        respawnMagazines[] = {
            SVD_MAGAZINES_6,
            MAKAROV_MAGAZINES_4
        };
    };

    class AFN_LF_Crewman : AFN_LF_Rifleman {
        displayName = "AFN LF Crew";
        nameSound = "crew";

        model = "\\edf_characters\\edf_rf_soldier_b.p3d";

        accuracy = 1000; // never recognize

        weapons[] = {
            "AKS74U",
            "Makarov",
            "NVGoggles",
            DefaultEquip
        };

        magazines[] = {
            AK_MAGAZINES_6,
            MAKAROV_MAGAZINES_4,
            SMOKE_SHELL_GREEN_2
        };

        respawnWeapons[] = {
            "AKS74U",
            "Makarov",
            "NVGoggles",
            DefaultEquip
        };

        respawnMagazines[] = {
            AK_MAGAZINES_6,
            MAKAROV_MAGAZINES_4,
            SMOKE_SHELL_GREEN_2
        };
    };
};

class CfgGroups {
    class West {
        name = "BLUFOR";

        class AFN_TD {
            name = "AFN Territorial Defense";

            class AFN_TDF_RifleSquad {
                name = "TD RifleSquad";

                class Unit0 {
                    side = 1;
                    vehicle = "AFN_TDF_TeamLeader";
                    rank = "SERGEANT";
                    position[] = {0, 0, 0};
                };

                class Unit1 {
                    side = 1;
                    vehicle = "AFN_TDF_Rifleman";
                    rank = "PRIVATE";
                    position[] = {5, -5, 0};
                };

                class Unit2 {
                    side = 1;
                    vehicle = "AFN_TDF_Grenadier";
                    rank = "PRIVATE";
                    position[] = {-5, -5, 0};
                };

                class Unit3 {
                    side = 1;
                    vehicle = "AFN_TDF_AutomaticRifleman";
                    rank = "CORPORAL";
                    position[] = {10, -10, 0};
                };

                class Unit4 {
                    side = 1;
                    vehicle = "AFN_TDF_Rifleman";
                    rank = "PRIVATE";
                    position[] = {-10, -10, 0};
                };

                class Unit5 {
                    side = 1;
                    vehicle = "AFN_TDF_AntiTank";
                    rank = "PRIVATE";
                    position[] = {15, -15, 0};
                };
            };
        };
    };
};
