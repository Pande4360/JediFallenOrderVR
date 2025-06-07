#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimInstance.hpp"
#include "AnimNode_Base.hpp"
#include "AnimNode_SubInstance.hpp"
void* _Script_Engine::AnimNode_SubInstance::get_InstanceProperties() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::AnimNode_SubInstance::get_InPose() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::AnimNode_SubInstance::get_InstanceClass() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::AnimNode_SubInstance::get_Tag() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_Engine::AnimInstance*& _Script_Engine::AnimNode_SubInstance::get_InstanceToRun() {
    return *(_Script_Engine::AnimInstance**)((uintptr_t)this + 0x50);
}
void* _Script_Engine::AnimNode_SubInstance::get_SubInstanceProperties() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::AnimNode_SubInstance::get_SourcePropertyNames() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::AnimNode_SubInstance::get_DestPropertyNames() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_Engine::AnimNode_SubInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimNode_SubInstance");
    return result;
}
