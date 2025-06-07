#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpFilter.hpp"
#include "InterpFilter_Custom.hpp"
_Script_CoreUObject::Class* _Script_Engine::InterpFilter_Custom::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpFilter_Custom");
    return result;
}
