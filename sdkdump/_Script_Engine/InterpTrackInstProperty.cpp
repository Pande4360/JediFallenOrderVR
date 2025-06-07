#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Property.hpp"
#include "InterpTrackInst.hpp"
#include "InterpTrackInstProperty.hpp"
_Script_CoreUObject::Property*& _Script_Engine::InterpTrackInstProperty::get_InterpProperty() {
    return *(_Script_CoreUObject::Property**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Object*& _Script_Engine::InterpTrackInstProperty::get_PropertyOuterObjectInst() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::InterpTrackInstProperty::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackInstProperty");
    return result;
}
