#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveLinearColor.hpp"
#include "TTLinearColorTrack.hpp"
#include "TTTrackBase.hpp"
_Script_Engine::CurveLinearColor*& _Script_Engine::TTLinearColorTrack::get_CurveLinearColor() {
    return *(_Script_Engine::CurveLinearColor**)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::TTLinearColorTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TTLinearColorTrack");
    return result;
}
