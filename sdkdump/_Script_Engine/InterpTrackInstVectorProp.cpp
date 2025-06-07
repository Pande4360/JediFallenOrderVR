#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackInstProperty.hpp"
#include "InterpTrackInstVectorProp.hpp"
void* _Script_Engine::InterpTrackInstVectorProp::get_ResetVector() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackInstVectorProp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackInstVectorProp");
    return result;
}
