#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimBlueprintGeneratedClass.hpp"
#include "BlueprintGeneratedClass.hpp"
#include "Skeleton.hpp"
void* _Script_Engine::AnimBlueprintGeneratedClass::get_BakedStateMachines() {
    return (void*)((uintptr_t)this + 0x2f0);
}
_Script_Engine::Skeleton*& _Script_Engine::AnimBlueprintGeneratedClass::get_TargetSkeleton() {
    return *(_Script_Engine::Skeleton**)((uintptr_t)this + 0x300);
}
void* _Script_Engine::AnimBlueprintGeneratedClass::get_OrderedSavedPoseIndices() {
    return (void*)((uintptr_t)this + 0x320);
}
void* _Script_Engine::AnimBlueprintGeneratedClass::get_AnimNotifies() {
    return (void*)((uintptr_t)this + 0x308);
}
void* _Script_Engine::AnimBlueprintGeneratedClass::get_SyncGroupNames() {
    return (void*)((uintptr_t)this + 0x348);
}
_Script_CoreUObject::Class* _Script_Engine::AnimBlueprintGeneratedClass::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimBlueprintGeneratedClass");
    return result;
}
