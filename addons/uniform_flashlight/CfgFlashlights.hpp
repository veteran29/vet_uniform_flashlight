
class CFG_FLASHLIGHTS {
    class Default {
        class White {
            color[] = {0.5, 0.5, 0.5};
            colorAmbient[] = {0.1, 0.1, 0.1};
            intensity = 1000;

            flare = 1;
            flareSize = 0.1;
            flareDistance = 15;

            dayLight = 1;
            infrared = 0;

            lightConePars[] = {65, 35, 1};
            // https://community.bistudio.com/wiki/setLightAttenuation
            lightAttenuation[] = {
                1.5,    // distance at which light streng starts falling off
                2,      // constant light falloff factor
                2,      // linear light falloff factor (factor * distance)
                0,      // quadratic light falloff factor (factor * distance^2)
                10,     // max distance hard limit start (start of fading of intensity to 0)
                35      // max distance hard limit end (end of fading of intensity to 0)
            };
        };
    };
};

class CFG_EQUIPMENT {
    class Default {
        flashlight = "Default";

        attachBone = "";
        attachBoneFollow = 1;

        attachOffset[] = {0, 0, 0};
        attachVectorDir[] = {0, 0, 0};
        attachVectorUp[] = {0, 0, 0};
    };

    class H_HelmetSpecB: Default {
        attachBone = "head";

        attachOffset[] = {-0.19, -0.1, 0.11};
    };
};