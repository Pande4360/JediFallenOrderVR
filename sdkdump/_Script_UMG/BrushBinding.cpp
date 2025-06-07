#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\SlateBrush.hpp"
#include "BrushBinding.hpp"
#include "PropertyBinding.hpp"
_Script_CoreUObject::Class* _Script_UMG::BrushBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.BrushBinding");
    return result;
}
_Script_SlateCore::SlateBrush _Script_UMG::BrushBinding::GetValue() {
    return;
}
