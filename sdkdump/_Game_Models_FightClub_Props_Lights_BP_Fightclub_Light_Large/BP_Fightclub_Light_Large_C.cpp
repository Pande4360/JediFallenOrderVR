#include "..\FUObjectArray.hpp"
#include "..\_Game_Audio_Component_Comp_Audio_Actor_Continuous\Comp_Audio_Actor_Continuous_C.hpp"
#include "BP_Fightclub_Light_Large_C.hpp"
#include "..\_Script_AkAudio\AkBankLoadComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
_Script_CoreUObject::Class* _Game_Models_FightClub_Props_Lights_BP_Fightclub_Light_Large::BP_Fightclub_Light_Large_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Models/FightClub/Props/Lights/BP_Fightclub_Light_Large.BP_Fightclub_Light_Large_C");
    return result;
}
_Game_Audio_Component_Comp_Audio_Actor_Continuous::Comp_Audio_Actor_Continuous_C*& _Game_Models_FightClub_Props_Lights_BP_Fightclub_Light_Large::BP_Fightclub_Light_Large_C::get_Comp_Audio_Actor_Continuous() {
    return *(_Game_Audio_Component_Comp_Audio_Actor_Continuous::Comp_Audio_Actor_Continuous_C**)((uintptr_t)this + 0x370);
}
_Script_AkAudio::AkBankLoadComponent*& _Game_Models_FightClub_Props_Lights_BP_Fightclub_Light_Large::BP_Fightclub_Light_Large_C::get_AkBankLoad() {
    return *(_Script_AkAudio::AkBankLoadComponent**)((uintptr_t)this + 0x378);
}
void _Game_Models_FightClub_Props_Lights_BP_Fightclub_Light_Large::BP_Fightclub_Light_Large_C::UserConstructionScript() {
    return;
}
