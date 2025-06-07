#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneSpawnable.hpp"
void* _Script_MovieScene::MovieSceneSpawnable::get_SpawnTransform() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneSpawnable::get_Tags() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_MovieScene::MovieSceneSpawnable::get_Guid() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_MovieScene::MovieSceneSpawnable::get_Name() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_MovieScene::MovieSceneSpawnable::get_Ownership() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Object*& _Script_MovieScene::MovieSceneSpawnable::get_ObjectTemplate() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x60);
}
void* _Script_MovieScene::MovieSceneSpawnable::get_ChildPossessables() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_MovieScene::MovieSceneSpawnable::get_BaseStartFrameTransform() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_MovieScene::MovieSceneSpawnable::get_LevelName() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSpawnable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneSpawnable");
    return result;
}
