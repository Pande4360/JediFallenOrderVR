#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FloatBinding.hpp"
#include "PropertyBinding.hpp"
float _Script_UMG::FloatBinding::GetValue() {
    return;
}
_Script_CoreUObject::Class* _Script_UMG::FloatBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.FloatBinding");
    return result;
}
