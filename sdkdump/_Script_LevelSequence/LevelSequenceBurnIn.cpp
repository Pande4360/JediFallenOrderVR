#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LevelSequenceActor.hpp"
#include "LevelSequenceBurnIn.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Script_LevelSequence::LevelSequenceBurnIn::GetSettingsClass() {
    return;
}
void* _Script_LevelSequence::LevelSequenceBurnIn::get_FrameInformation() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_LevelSequence::LevelSequenceActor*& _Script_LevelSequence::LevelSequenceBurnIn::get_LevelSequenceActor() {
    return *(_Script_LevelSequence::LevelSequenceActor**)((uintptr_t)this + 0x290);
}
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequenceBurnIn::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LevelSequence.LevelSequenceBurnIn");
    return result;
}
void _Script_LevelSequence::LevelSequenceBurnIn::SetSettings(_Script_CoreUObject::Object* InSettings) {
    return;
}
