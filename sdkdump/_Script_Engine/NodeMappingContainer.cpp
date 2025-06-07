#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NodeMappingContainer.hpp"
void* _Script_Engine::NodeMappingContainer::get_SourceItems() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::NodeMappingContainer::get_TargetItems() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::NodeMappingContainer::get_TargetAsset() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_Engine::NodeMappingContainer::get_SourceToTarget() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_Engine::NodeMappingContainer::get_SourceAsset() {
    return (void*)((uintptr_t)this + 0x118);
}
_Script_CoreUObject::Class* _Script_Engine::NodeMappingContainer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NodeMappingContainer");
    return result;
}
