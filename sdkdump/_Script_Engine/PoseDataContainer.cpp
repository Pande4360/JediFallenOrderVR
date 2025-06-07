#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PoseDataContainer.hpp"
void* _Script_Engine::PoseDataContainer::get_Tracks() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::PoseDataContainer::get_PoseNames() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::PoseDataContainer::get_TrackMap() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::PoseDataContainer::get_Poses() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::PoseDataContainer::get_Curves() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_Engine::PoseDataContainer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PoseDataContainer");
    return result;
}
