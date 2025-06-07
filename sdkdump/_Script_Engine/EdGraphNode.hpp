#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct EdGraphNode : public _Script_CoreUObject::Object {
    private: char pad_28[0x70]; public:
    void* get_DeprecatedPins();
    int32_t& get_NodePosX();
    int32_t& get_NodePosY();
    int32_t& get_NodeWidth();
    int32_t& get_NodeHeight();
    void* get_AdvancedPinDisplay();
    void* get_EnabledState();
    bool get_bDisplayAsDisabled();
    void set_bDisplayAsDisabled(bool value);
    bool get_bUserSetEnabledState();
    void set_bUserSetEnabledState(bool value);
    bool get_bIsNodeEnabled();
    void set_bIsNodeEnabled(bool value);
    bool get_bHasCompilerMessage();
    void set_bHasCompilerMessage(bool value);
    bool get_bCommentBubblePinned();
    void set_bCommentBubblePinned(bool value);
    bool get_bCommentBubbleVisible();
    void set_bCommentBubbleVisible(bool value);
    bool get_bCommentBubbleMakeVisible();
    void set_bCommentBubbleMakeVisible(bool value);
    void* get_NodeComment();
    int32_t& get_ErrorType();
    void* get_ErrorMsg();
    void* get_NodeGuid();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
