#ifndef TEMPLATE_H_INCLUDED
#define TEMPLATE_H_INCLUDED

#define COLOR_COUNT 5

char header_section[] = "<!DOCTYPE html> <html class='h-100' lang='en'> <head> <!-- meta --> <meta charset='UTF-8'/> <meta content='IE=edge' http-equiv='X-UA-Compatible'/> <meta content='width=device-width, initial-scale=1.0' name='viewport'/> <title>{{user_name}} portfolio</title> <meta name='description' content='{{description}}'> <!-- styles --> <link href='https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/css/bootstrap.min.css' rel='stylesheet' /> <link href='https://cdn.jsdelivr.net/npm/bootstrap-icons@1.7.2/font/bootstrap-icons.css' rel='stylesheet' /> <link href='./app.css' rel='stylesheet' /> <!-- fonts --> <link rel='preconnect' href='https://fonts.googleapis.com' /> <link rel='preconnect' href='https://fonts.gstatic.com' crossorigin /> <link href='https://fonts.googleapis.com/css2?family=Readex+Pro:wght@400;600&display=swap' rel='stylesheet' /> </head> <body class='{{color_theme}} d-flex flex-column h-100'> <nav class='p-3 bg-dark text-white flex-shrink-0 fixed-top'> <div class='container'> <div class='d-flex flex-wrap align-items-center justify-content-center justify-content-lg-start'> <a class='d-flex align-items-center mb-2 mb-lg-0 text-white text-decoration-none' href='#'> {{user_name}} </a> <!--<ul class='nav col-12 col-lg-auto me-lg-auto mb-2 justify-content-center mb-md-0'>--> <!--<li><a class='nav-link px-2 text-secondary' href='#'>Home</a></li>--> <!--</ul>--> </div> </div> </nav> <main>";
char landing_section[] = "<section class='min-vh-100 bg-primary bg-gradient d-flex bg-img bg-landing shadow-sm'> <div class='m-auto container'> <h1> Welcome to<br> <span class='fw-bold text-uppercase'>{{user_name}}</span><br> portfolio<br> </h1> </div> </section>";
char image_section[] = "<section class='min-vh-100 d-flex container'> <div class='m-auto row w-100'> <div class='col-6 d-flex'> <div class='my-auto'> <h2 class='fw-bold text-uppercase'>{{title}}</h2> <p class='w-75 mb-0'> {{text}} </p> </div> </div> <div class='col-6'> <img alt='{{alt}}' class='w-100' src='{{image}}'> </div> </div> </section>";
char hero_section[] = "<section class='min-vh-50 bg-dark text-white d-flex bg-img bg-hero'> <div class='container m-auto py-5'> <h1>{{title}}</h1> <h2 class='fs-3'>{{subtitle}}</h2> </div> </section>";
char contact_section[] = "<section> <div class='container py-5 my-5'> <h2 class='fw-bold text-uppercase text-center'>{{title}}</h2> <div class='row mt-5 mb-2'> <div class='col-xl-4 col-md-6 col-12 mt-3'> <a class='px-5 py-3 border rounded-3 border-primary pointer contact d-block' href='tel:{{phone}}'> <h3> <i class='bi bi-telephone text-primary contact__icon'></i> {{phone_title}} </h3> <p class='mb-0'>{{phone}}</p> </a> </div> <div class='col-xl-4 col-md-6 col-12 mt-3'> <a class='px-5 py-3 border rounded-3 border-primary pointer contact d-block' href='mail:{{email}}'> <h3> <i class='bi bi-vector-pen text-primary contact__icon'></i> {{email_title}} </h3> <p class='mb-0'>{{email}}</p> </a> </div> <div class='col-xl-4 col-12 mt-3'> <a class='px-5 py-3 border rounded-3 border-primary pointer contact d-block' href='https://www.google.lt/maps/dir//{{address}}' target='_blank'> <h3> <i class='bi bi-house text-primary text-hover-white contact__icon'></i> {{address_title}} </h3> <p class='mb-0'>{{address}}</p> </a> </div> </div> </div> </section>";
char carousel_section[] = "<section> <div id='carouselExampleControls' class='carousel slide' data-bs-ride='carousel'> <div class='carousel-inner'> <div class='carousel-item active'> <img src='{{image}}' class='d-block w-100' alt='{{alt}}'> </div> </div> <button class='carousel-control-prev' type='button' data-bs-target='#carouselExampleControls' data-bs-slide='prev'> <span class='carousel-control-prev-icon' aria-hidden='true'></span> <span class='visually-hidden'>Previous</span> </button> <button class='carousel-control-next' type='button' data-bs-target='#carouselExampleControls' data-bs-slide='next'> <span class='carousel-control-next-icon' aria-hidden='true'></span> <span class='visually-hidden'>Next</span> </button> </div> </section><section> <div id='carouselExampleControls' class='carousel slide' data-bs-ride='carousel'> <div class='carousel-inner'> <div class='carousel-item active'> <img src='{{image}}' class='d-block w-100' alt='{{alt}}'> </div> </div> <button class='carousel-control-prev' type='button' data-bs-target='#carouselExampleControls' data-bs-slide='prev'> <span class='carousel-control-prev-icon' aria-hidden='true'></span> <span class='visually-hidden'>Previous</span> </button> <button class='carousel-control-next' type='button' data-bs-target='#carouselExampleControls' data-bs-slide='next'> <span class='carousel-control-next-icon' aria-hidden='true'></span> <span class='visually-hidden'>Next</span> </button> </div> </section>";
char footer_section[] = "</main> <footer class='footer mt-auto py-3 bg-dark'> <div class='container'> <span class='text-muted'>{{user_name}} © {{current_year}}</span> </div> </footer> <script crossorigin='anonymous' integrity='sha384-MrcW6ZMFYlzcLA8Nl+NtUVF0sA7MsXsP1UyJoMp4YLEuNSfAP+JcXn/tWtIaxVXM' src='https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/js/bootstrap.bundle.min.js' ></script> </body> </html>";

char *section_pointers[] = {
        landing_section,
        image_section,
        hero_section,
        contact_section,
        carousel_section,
        header_section,
        landing_section,
        footer_section
};

char colors[COLOR_COUNT][10] = {
        "pink",
        "orange",
        "blue",
        "red",
        "pastel",
};

#endif /* TEMPLATE_H_INCLUDED */
