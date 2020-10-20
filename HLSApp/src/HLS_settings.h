/* ------------------------------------------------------------
   --- File containing sensor's layout definitions and its ----
   --------------- calibration parameters ---------------------
   ------------------------------------------------------------ */

/* layout of the sensors, i.e. the relation between specific sensors and the rack that they are plugged in */
char *disp_sensors[9][12] =
    {{"H7DC_032", "H7DC_033", "H7DC_034", "H7DC_035", "H7DC_036", "H7DC_037", "H7DC_038", "H7DC_039"}, /* Sensors connected to Rack 1 */
     {"H7DC_040", "H7DC_041", "H7DC_042", "H7DC_043", "H7DC_044", "H7DC_045", "H7DC_046", "H7DC_047"}, /* Rack 2 */
     {"H7DC_048", "H7DC_049", "H7DC_050", "H7DC_051", "H7DC_052", "H7DC_053", "H7DC_054", "H7DC_055"}, /* Rack 3 */
     {"H7DC_056", "H7DC_057", "H7DC_058", "H7DC_059", "H7DC_060", "H7DC_061", "N/C", "N/C"}}; /* Rack 4 */



/* calibration parameters for the level convertion of the sensors */
float calib_list[30][4] =
    {{1.473e-4, -2.382e-3, 5.0951e-1, 5.0000}, /* H7DC_032 sensor */
     {1.486e-4, -2.447e-3, 5.0950e-1, 4.9993}, /* H7DC_033 sensor */
     {1.469e-4, -2.416e-3, 5.1002e-1, 4.9994}, /* H7DC_034 sensor */
     {1.479e-4, -2.445e-3, 5.0971e-1, 4.9993}, /* H7DC_035 sensor */
     {1.444e-4, -2.387e-3, 5.0941e-1, 4.9992}, /* H7DC_036 sensor */
     {1.522e-4, -2.419e-3, 5.0900e-1, 4.9990}, /* H7DC_037 sensor */
     {1.472e-4, -2.378e-3, 5.0913e-1, 4.9995}, /* H7DC_038 sensor */
     {1.452e-4, -2.331e-3, 5.0884e-1, 4.9994}, /* H7DC_039 sensor */
     {1.433e-4, -2.366e-3, 5.0923e-1, 4.9993}, /* H7DC_040 sensor */
     {1.478e-4, -2.335e-3, 5.0846e-1, 4.9995}, /* H7DC_041 sensor */
     {1.437e-4, -2.321e-3, 5.0883e-1, 4.9993}, /* H7DC_042 sensor */
     {1.417e-4, -2.278e-3, 5.0844e-1, 4.9995}, /* H7DC_043 sensor */
     {1.451e-4, -2.422e-3, 5.0961e-1, 4.9994}, /* H7DC_044 sensor */
     {1.470e-4, -2.350e-3, 5.0884e-1, 5.0001}, /* H7DC_045 sensor */
     {1.517e-4, -2.379e-3, 5.0852e-1, 4.9992}, /* H7DC_046 sensor */
     {1.464e-4, -2.290e-3, 5.0862e-1, 4.9996}, /* H7DC_047 sensor */
     {1.532e-4, -2.401e-3, 5.0866e-1, 4.9997}, /* H7DC_048 sensor */
     {1.445e-4, -2.365e-3, 5.0896e-1, 4.9999}, /* H7DC_049 sensor */
     {1.439e-4, -2.334e-3, 5.0876e-1, 4.9995}, /* H7DC_050 sensor */
     {1.450e-4, -2.307e-3, 5.0841e-1, 4.9995}, /* H7DC_051 sensor */
     {1.466e-4, -2.277e-3, 5.0724e-1, 4.9994}, /* H7DC_052 sensor */
     {1.451e-4, -2.330e-3, 5.0857e-1, 4.9999}, /* H7DC_053 sensor */
     {1.501e-4, -2.309e-3, 5.0791e-1, 4.9996}, /* H7DC_054 sensor */
     {1.384e-4, -2.282e-3, 5.0877e-1, 4.9992}, /* H7DC_055 sensor */
     {1.401e-4, -2.256e-3, 5.0810e-1, 4.9998}, /* H7DC_056 sensor */
     {1.493e-4, -2.378e-3, 5.0835e-1, 4.9995}, /* H7DC_057 sensor */
     {1.464e-4, -2.325e-3, 5.0915e-1, 4.9994}, /* H7DC_058 sensor */
     {1.469e-4, -2.411e-3, 5.0952e-1, 4.9992}, /* H7DC_059 sensor */
     {1.480e-4, -2.283e-3, 5.0728e-1, 4.9995}, /* H7DC_060 sensor */
     {1.453e-4, -2.317e-3, 5.0852e-1, 5.0001}};  /* H7DC_061 sensor */

/* calibration parameters for the temperature convertion of the temperature probes of the sensors */
float calib_temp[2] = {5.00352, -0.4045};

/* specific parameters for dilatation correction in the level measurements */
float dilCorr_pol[4] = {-0.0036023, 0.75406167, -5.2344, 8.4976};
int Tref = 20;
int Hdiff = 54;
int Cdil_vessel = 17; 
int pt = 11;
