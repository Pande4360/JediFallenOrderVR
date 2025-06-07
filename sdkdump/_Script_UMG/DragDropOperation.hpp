#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct Widget;
}
namespace _Script_SlateCore {
struct PointerEvent;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct DragDropOperation : public _Script_CoreUObject::Object {
    private: char pad_28[0x60]; public:
    void* get_Tag();
    _Script_CoreUObject::Object*& get_Payload();
    _Script_UMG::Widget*& get_DefaultDragVisual();
    void* get_Pivot();
    void* get_Offset();
    void* get_OnDrop();
    void* get_OnDragCancelled();
    void* get_OnDragged();
    static _Script_CoreUObject::Class* static_class();
    void Drop(_Script_SlateCore::PointerEvent& PointerEvent);
    void Dragged(_Script_SlateCore::PointerEvent& PointerEvent);
    void DragCancelled(_Script_SlateCore::PointerEvent& PointerEvent);
}; // Size: 0x88
#pragma pack(pop)
}
