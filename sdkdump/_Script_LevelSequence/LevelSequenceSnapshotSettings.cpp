#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelSequenceSnapshotSettings.hpp"
void* _Script_LevelSequence::LevelSequenceSnapshotSettings::get_ZeroPadAmount() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_LevelSequence::LevelSequenceSnapshotSettings::get_FrameRate() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_LevelSequence::LevelSequenceSnapshotSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LevelSequence.LevelSequenceSnapshotSettings");
    return result;
}
