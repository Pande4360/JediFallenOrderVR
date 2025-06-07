#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ContentWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct SizeBox : public ContentWidget {
    private: char pad_118[0x30]; public:
    bool get_bOverride_WidthOverride();
    void set_bOverride_WidthOverride(bool value);
    bool get_bOverride_HeightOverride();
    void set_bOverride_HeightOverride(bool value);
    bool get_bOverride_MinDesiredWidth();
    void set_bOverride_MinDesiredWidth(bool value);
    bool get_bOverride_MinDesiredHeight();
    void set_bOverride_MinDesiredHeight(bool value);
    bool get_bOverride_MaxDesiredWidth();
    void set_bOverride_MaxDesiredWidth(bool value);
    bool get_bOverride_MaxDesiredHeight();
    void set_bOverride_MaxDesiredHeight(bool value);
    bool get_bOverride_MaxAspectRatio();
    void set_bOverride_MaxAspectRatio(bool value);
    float& get_WidthOverride();
    float& get_HeightOverride();
    float& get_MinDesiredWidth();
    float& get_MinDesiredHeight();
    float& get_MaxDesiredWidth();
    float& get_MaxDesiredHeight();
    float& get_MaxAspectRatio();
    static _Script_CoreUObject::Class* static_class();
    void SetWidthOverride(float InWidthOverride);
    void SetMinDesiredWidth(float InMinDesiredWidth);
    void SetMinDesiredHeight(float InMinDesiredHeight);
    void SetMaxDesiredWidth(float InMaxDesiredWidth);
    void SetMaxDesiredHeight(float InMaxDesiredHeight);
    void SetMaxAspectRatio(float InMaxAspectRatio);
    void SetHeightOverride(float InHeightOverride);
    void ClearWidthOverride();
    void ClearMinDesiredWidth();
    void ClearMinDesiredHeight();
    void ClearMaxDesiredWidth();
    void ClearMaxDesiredHeight();
    void ClearMaxAspectRatio();
    void ClearHeightOverride();
}; // Size: 0x148
#pragma pack(pop)
}
