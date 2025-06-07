#include "..\FUObjectArray.hpp"
#include "ActorSequenceObjectReference.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ActorSequence::ActorSequenceObjectReference::get_Type() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ActorSequence::ActorSequenceObjectReference::get_ActorId() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_ActorSequence::ActorSequenceObjectReference::get_PathToComponent() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_ActorSequence::ActorSequenceObjectReference::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ActorSequence.ActorSequenceObjectReference");
    return result;
}
