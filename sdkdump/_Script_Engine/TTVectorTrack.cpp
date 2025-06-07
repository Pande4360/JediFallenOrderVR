#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveVector.hpp"
#include "TTTrackBase.hpp"
#include "TTVectorTrack.hpp"
_Script_Engine::CurveVector*& _Script_Engine::TTVectorTrack::get_CurveVector() {
    return *(_Script_Engine::CurveVector**)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::TTVectorTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TTVectorTrack");
    return result;
}
