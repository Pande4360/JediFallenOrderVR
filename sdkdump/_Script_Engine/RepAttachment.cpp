#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "RepAttachment.hpp"
#include "SceneComponent.hpp"
_Script_CoreUObject::Class* _Script_Engine::RepAttachment::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RepAttachment");
    return result;
}
_Script_Engine::Actor*& _Script_Engine::RepAttachment::get_AttachParent() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::RepAttachment::get_LocationOffset() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::RepAttachment::get_RelativeScale3D() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_Engine::SceneComponent*& _Script_Engine::RepAttachment::get_AttachComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x38);
}
void* _Script_Engine::RepAttachment::get_RotationOffset() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::RepAttachment::get_AttachSocket() {
    return (void*)((uintptr_t)this + 0x30);
}
