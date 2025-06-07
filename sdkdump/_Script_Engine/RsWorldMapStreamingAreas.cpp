#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsWorldMapStreamingAreas.hpp"
void* _Script_Engine::RsWorldMapStreamingAreas::get_StreamingArea_Collision() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::RsWorldMapStreamingAreas::get_StreamingArea_Visual() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::RsWorldMapStreamingAreas::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsWorldMapStreamingAreas");
    return result;
}
