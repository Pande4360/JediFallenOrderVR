#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveFloat.hpp"
#include "TTEventTrack.hpp"
#include "TTTrackBase.hpp"
_Script_Engine::CurveFloat*& _Script_Engine::TTEventTrack::get_CurveKeys() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::TTEventTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TTEventTrack");
    return result;
}
