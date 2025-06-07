#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelSequence.hpp"
#include "..\_Script_MovieScene\MovieScene.hpp"
#include "..\_Script_MovieScene\MovieSceneSequence.hpp"
void* _Script_LevelSequence::LevelSequence::get_bIsCinematicSequence() {
    return (void*)((uintptr_t)this + 0x498);
}
_Script_MovieScene::MovieScene*& _Script_LevelSequence::LevelSequence::get_MovieScene() {
    return *(_Script_MovieScene::MovieScene**)((uintptr_t)this + 0x348);
}
void* _Script_LevelSequence::LevelSequence::get_DirectorClass() {
    return (void*)((uintptr_t)this + 0x350);
}
void* _Script_LevelSequence::LevelSequence::get_ObjectReferences() {
    return (void*)((uintptr_t)this + 0x358);
}
void* _Script_LevelSequence::LevelSequence::get_BindingReferences() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void* _Script_LevelSequence::LevelSequence::get_PossessedObjects() {
    return (void*)((uintptr_t)this + 0x448);
}
void* _Script_LevelSequence::LevelSequence::get_bAllowFootsteps() {
    return (void*)((uintptr_t)this + 0x49c);
}
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequence::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LevelSequence.LevelSequence");
    return result;
}
