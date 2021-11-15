/* Some definitions needed for DSMR */

/**
 * @file dsmr.h
 * @author Joost Bloemsma (joost.a@bloemsma.net)
 * @brief Base definitions needed for communication over DSMR protocol
 * @version 1
 * @date 2021-11-15
 * 
 * @copyright Copyright (c) 2021
 * 
 * Extra info (mostly in Dutch):
 * - <http://domoticx.com/p1-poort-slimme-meter-uitlezen-hardware/>
 * - <http://gejanssen.com/howto/Slimme-meter-uitlezen/index.html>
 * - <https://www.zonstraal.be/wiki/Datalogging_van_slimme_meters>
 * - <http://www.nodo-domotica.nl/forum/viewtopic.php?f=8&t=627>
 */
class DSMR {
  public:
    DSMR();
    void init();
};