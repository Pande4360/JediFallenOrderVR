#include "..\FUObjectArray.hpp"
#include "ActorSequencePlayer.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSequencePlayer.hpp"
_Script_CoreUObject::Class* _Script_ActorSequence::ActorSequencePlayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ActorSequence.ActorSequencePlayer");
    return result;
}
