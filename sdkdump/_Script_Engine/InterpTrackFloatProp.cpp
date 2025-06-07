#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackFloatBase.hpp"
#include "InterpTrackFloatProp.hpp"
void* _Script_Engine::InterpTrackFloatProp::get_PropertyName() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackFloatProp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackFloatProp");
    return result;
}
