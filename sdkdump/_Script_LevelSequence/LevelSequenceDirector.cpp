#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LevelSequenceDirector.hpp"
#include "LevelSequencePlayer.hpp"
_Script_LevelSequence::LevelSequencePlayer*& _Script_LevelSequence::LevelSequenceDirector::get_Player() {
    return *(_Script_LevelSequence::LevelSequencePlayer**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequenceDirector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LevelSequence.LevelSequenceDirector");
    return result;
}
void _Script_LevelSequence::LevelSequenceDirector::OnCreated() {
    return;
}
