#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Material.hpp"
#include "MaterialExpression.hpp"
#include "MaterialFunction.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialExpression::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialExpression");
    return result;
}
_Script_Engine::Material*& _Script_Engine::MaterialExpression::get_Material() {
    return *(_Script_Engine::Material**)((uintptr_t)this + 0x28);
}
bool _Script_Engine::MaterialExpression::get_bIsParameterExpression() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
_Script_Engine::MaterialFunction*& _Script_Engine::MaterialExpression::get_Function() {
    return *(_Script_Engine::MaterialFunction**)((uintptr_t)this + 0x30);
}
void _Script_Engine::MaterialExpression::set_bIsParameterExpression(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
