#include "..\FUObjectArray.hpp"
#include "ActorSequence.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieScene.hpp"
#include "..\_Script_MovieScene\MovieSceneSequence.hpp"
_Script_MovieScene::MovieScene*& _Script_ActorSequence::ActorSequence::get_MovieScene() {
    return *(_Script_MovieScene::MovieScene**)((uintptr_t)this + 0x348);
}
void* _Script_ActorSequence::ActorSequence::get_ObjectReferences() {
    return (void*)((uintptr_t)this + 0x350);
}
_Script_CoreUObject::Class* _Script_ActorSequence::ActorSequence::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ActorSequence.ActorSequence");
    return result;
}
