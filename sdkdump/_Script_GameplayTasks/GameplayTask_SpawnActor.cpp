#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "GameplayTask.hpp"
#include "GameplayTask_SpawnActor.hpp"
void* _Script_GameplayTasks::GameplayTask_SpawnActor::get_Success() {
    return (void*)((uintptr_t)this + 0x68);
}
void _Script_GameplayTasks::GameplayTask_SpawnActor::FinishSpawningActor(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::Actor* SpawnedActor) {
    return;
}
void* _Script_GameplayTasks::GameplayTask_SpawnActor::get_DidNotSpawn() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_GameplayTasks::GameplayTask_SpawnActor::get_ClassToSpawn() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_GameplayTasks::GameplayTask_SpawnActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayTasks.GameplayTask_SpawnActor");
    return result;
}
_Script_GameplayTasks::GameplayTask_SpawnActor* _Script_GameplayTasks::GameplayTask_SpawnActor::SpawnActor(void* TaskOwner, _Script_CoreUObject::Vector SpawnLocation, _Script_CoreUObject::Rotator SpawnRotation, void* Class, bool bSpawnOnlyOnAuthority) {
    return;
}
bool _Script_GameplayTasks::GameplayTask_SpawnActor::BeginSpawningActor(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::Actor*& SpawnedActor) {
    return;
}
