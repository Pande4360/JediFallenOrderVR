#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LevelSequenceActor.hpp"
#include "RsAutoTestSequenceActor.hpp"
_Script_CoreUObject::Class* _Script_LevelSequence::RsAutoTestSequenceActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LevelSequence.RsAutoTestSequenceActor");
    return result;
}
float& _Script_LevelSequence::RsAutoTestSequenceActor::get_DesiredCameraSpeed() {
    return *(float*)((uintptr_t)this + 0x410);
}
