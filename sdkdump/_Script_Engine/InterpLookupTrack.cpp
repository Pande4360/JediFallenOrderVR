#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpLookupTrack.hpp"
_Script_CoreUObject::Class* _Script_Engine::InterpLookupTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.InterpLookupTrack");
    return result;
}
void* _Script_Engine::InterpLookupTrack::get_Points() {
    return (void*)((uintptr_t)this + 0x0);
}
