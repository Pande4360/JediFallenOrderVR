#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackInstFloatProp.hpp"
#include "InterpTrackInstProperty.hpp"
float& _Script_Engine::InterpTrackInstFloatProp::get_ResetFloat() {
    return *(float*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackInstFloatProp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackInstFloatProp");
    return result;
}
