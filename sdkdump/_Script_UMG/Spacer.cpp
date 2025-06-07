#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "Spacer.hpp"
#include "Widget.hpp"
void* _Script_UMG::Spacer::get_Size() {
    return (void*)((uintptr_t)this + 0x100);
}
_Script_CoreUObject::Class* _Script_UMG::Spacer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.Spacer");
    return result;
}
void _Script_UMG::Spacer::SetSize(_Script_CoreUObject::Vector2D InSize) {
    return;
}
