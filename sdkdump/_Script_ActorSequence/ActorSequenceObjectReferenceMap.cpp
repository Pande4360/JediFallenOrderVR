#include "..\FUObjectArray.hpp"
#include "ActorSequenceObjectReferenceMap.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ActorSequence::ActorSequenceObjectReferenceMap::get_BindingIds() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ActorSequence::ActorSequenceObjectReferenceMap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ActorSequence.ActorSequenceObjectReferenceMap");
    return result;
}
void* _Script_ActorSequence::ActorSequenceObjectReferenceMap::get_References() {
    return (void*)((uintptr_t)this + 0x10);
}
