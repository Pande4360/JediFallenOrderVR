#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct FontImportOptionsData {
    private: char pad_0[0xb0]; public:
    void* get_FontName();
    float& get_Height();
    bool get_bEnableAntialiasing();
    void set_bEnableAntialiasing(bool value);
    bool get_bEnableBold();
    void set_bEnableBold(bool value);
    bool get_bEnableItalic();
    void set_bEnableItalic(bool value);
    bool get_bEnableUnderline();
    void set_bEnableUnderline(bool value);
    bool get_bAlphaOnly();
    void set_bAlphaOnly(bool value);
    void* get_CharacterSet();
    void* get_Chars();
    void* get_UnicodeRange();
    void* get_CharsFilePath();
    void* get_CharsFileWildcard();
    bool get_bCreatePrintableOnly();
    void set_bCreatePrintableOnly(bool value);
    bool get_bIncludeASCIIRange();
    void set_bIncludeASCIIRange(bool value);
    void* get_ForegroundColor();
    bool get_bEnableDropShadow();
    void set_bEnableDropShadow(bool value);
    int32_t& get_TexturePageWidth();
    int32_t& get_TexturePageMaxHeight();
    int32_t& get_XPadding();
    int32_t& get_YPadding();
    int32_t& get_ExtendBoxTop();
    int32_t& get_ExtendBoxBottom();
    int32_t& get_ExtendBoxRight();
    int32_t& get_ExtendBoxLeft();
    bool get_bEnableLegacyMode();
    void set_bEnableLegacyMode(bool value);
    int32_t& get_Kerning();
    bool get_bUseDistanceFieldAlpha();
    void set_bUseDistanceFieldAlpha(bool value);
    int32_t& get_DistanceFieldScaleFactor();
    float& get_DistanceFieldScanRadiusScale();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
