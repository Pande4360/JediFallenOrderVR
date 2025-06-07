#include "..\FUObjectArray.hpp"
#include "ActorSequenceObjectReferences.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ActorSequence::ActorSequenceObjectReferences::get_Array() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ActorSequence::ActorSequenceObjectReferences::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ActorSequence.ActorSequenceObjectReferences");
    return result;
}
