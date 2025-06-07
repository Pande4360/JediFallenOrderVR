#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "SwPitchAdjustmentData.hpp"
_Script_Engine::CurveFloat*& _Script_SwGame::SwPitchAdjustmentData::get_RemapCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwPitchAdjustmentData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwPitchAdjustmentData");
    return result;
}
