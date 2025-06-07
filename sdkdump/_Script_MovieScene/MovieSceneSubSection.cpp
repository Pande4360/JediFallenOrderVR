#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSection.hpp"
#include "MovieSceneSequence.hpp"
#include "MovieSceneSubSection.hpp"
void* _Script_MovieScene::MovieSceneSubSection::get_Parameters() {
    return (void*)((uintptr_t)this + 0xe0);
}
float& _Script_MovieScene::MovieSceneSubSection::get_PrerollTime0() {
    return *(float*)((uintptr_t)this + 0x100);
}
float& _Script_MovieScene::MovieSceneSubSection::get_StartOffset() {
    return *(float*)((uintptr_t)this + 0xf8);
}
void* _Script_MovieScene::MovieSceneSubSection::get_TargetSequenceName() {
    return (void*)((uintptr_t)this + 0x130);
}
float& _Script_MovieScene::MovieSceneSubSection::get_TimeScale() {
    return *(float*)((uintptr_t)this + 0xfc);
}
_Script_MovieScene::MovieSceneSequence*& _Script_MovieScene::MovieSceneSubSection::get_SubSequence() {
    return *(_Script_MovieScene::MovieSceneSequence**)((uintptr_t)this + 0x108);
}
void* _Script_MovieScene::MovieSceneSubSection::get_ActorToRecord() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_MovieScene::MovieSceneSubSection::get_TargetPathToRecordTo() {
    return (void*)((uintptr_t)this + 0x140);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSubSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneSubSection");
    return result;
}
