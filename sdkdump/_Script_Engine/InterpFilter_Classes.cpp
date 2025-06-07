#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpFilter.hpp"
#include "InterpFilter_Classes.hpp"
_Script_CoreUObject::Class* _Script_Engine::InterpFilter_Classes::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpFilter_Classes");
    return result;
}
