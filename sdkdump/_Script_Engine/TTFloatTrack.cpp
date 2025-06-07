#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveFloat.hpp"
#include "TTFloatTrack.hpp"
#include "TTTrackBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::TTFloatTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TTFloatTrack");
    return result;
}
_Script_Engine::CurveFloat*& _Script_Engine::TTFloatTrack::get_CurveFloat() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x10);
}
