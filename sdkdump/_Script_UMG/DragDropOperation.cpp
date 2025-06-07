#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_SlateCore\PointerEvent.hpp"
#include "DragDropOperation.hpp"
#include "Widget.hpp"
void* _Script_UMG::DragDropOperation::get_OnDragCancelled() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_UMG::DragDropOperation::get_Tag() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_UMG::DragDropOperation::get_OnDragged() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_UMG::DragDropOperation::get_OnDrop() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Object*& _Script_UMG::DragDropOperation::get_Payload() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x38);
}
void* _Script_UMG::DragDropOperation::get_Offset() {
    return (void*)((uintptr_t)this + 0x4c);
}
_Script_UMG::Widget*& _Script_UMG::DragDropOperation::get_DefaultDragVisual() {
    return *(_Script_UMG::Widget**)((uintptr_t)this + 0x40);
}
void* _Script_UMG::DragDropOperation::get_Pivot() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_UMG::DragDropOperation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.DragDropOperation");
    return result;
}
void _Script_UMG::DragDropOperation::Drop(_Script_SlateCore::PointerEvent& PointerEvent) {
    return;
}
void _Script_UMG::DragDropOperation::Dragged(_Script_SlateCore::PointerEvent& PointerEvent) {
    return;
}
void _Script_UMG::DragDropOperation::DragCancelled(_Script_SlateCore::PointerEvent& PointerEvent) {
    return;
}
