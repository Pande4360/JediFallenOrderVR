#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneTemplateGenerationLedger.hpp"
void* _Script_MovieScene::MovieSceneTemplateGenerationLedger::get_LastTrackIdentifier() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneTemplateGenerationLedger::get_SubSectionRanges() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_MovieScene::MovieSceneTemplateGenerationLedger::get_TrackSignatureToTrackIdentifier() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneTemplateGenerationLedger::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneTemplateGenerationLedger");
    return result;
}
